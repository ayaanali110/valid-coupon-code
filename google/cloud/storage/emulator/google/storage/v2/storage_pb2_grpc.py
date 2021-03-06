# Generated by the gRPC Python protocol compiler plugin. DO NOT EDIT!
"""Client and server classes corresponding to protobuf-defined services."""
import grpc

from google.storage.v2 import storage_pb2 as google_dot_storage_dot_v2_dot_storage__pb2


class StorageStub(object):
    """Manages Google Cloud Storage resources.
    """

    def __init__(self, channel):
        """Constructor.

        Args:
            channel: A grpc.Channel.
        """
        self.ReadObject = channel.unary_stream(
                '/google.storage.v2.Storage/ReadObject',
                request_serializer=google_dot_storage_dot_v2_dot_storage__pb2.ReadObjectRequest.SerializeToString,
                response_deserializer=google_dot_storage_dot_v2_dot_storage__pb2.ReadObjectResponse.FromString,
                )
        self.WriteObject = channel.stream_unary(
                '/google.storage.v2.Storage/WriteObject',
                request_serializer=google_dot_storage_dot_v2_dot_storage__pb2.WriteObjectRequest.SerializeToString,
                response_deserializer=google_dot_storage_dot_v2_dot_storage__pb2.WriteObjectResponse.FromString,
                )
        self.StartResumableWrite = channel.unary_unary(
                '/google.storage.v2.Storage/StartResumableWrite',
                request_serializer=google_dot_storage_dot_v2_dot_storage__pb2.StartResumableWriteRequest.SerializeToString,
                response_deserializer=google_dot_storage_dot_v2_dot_storage__pb2.StartResumableWriteResponse.FromString,
                )
        self.QueryWriteStatus = channel.unary_unary(
                '/google.storage.v2.Storage/QueryWriteStatus',
                request_serializer=google_dot_storage_dot_v2_dot_storage__pb2.QueryWriteStatusRequest.SerializeToString,
                response_deserializer=google_dot_storage_dot_v2_dot_storage__pb2.QueryWriteStatusResponse.FromString,
                )


class StorageServicer(object):
    """Manages Google Cloud Storage resources.
    """

    def ReadObject(self, request, context):
        """Reads an object's data.
        """
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def WriteObject(self, request_iterator, context):
        """Stores a new object and metadata.

        An object can be written either in a single message stream or in a
        resumable sequence of message streams. To write using a single stream,
        the client should include in the first message of the stream an
        `WriteObjectSpec` describing the destination bucket, object, and any
        preconditions. Additionally, the final message must set 'finish_write' to
        true, or else it is an error.

        For a resumable write, the client should instead call
        `StartResumableWrite()` and provide that method an `WriteObjectSpec.`
        They should then attach the returned `upload_id` to the first message of
        each following call to `Create`. If there is an error or the connection is
        broken during the resumable `Create()`, the client should check the status
        of the `Create()` by calling `QueryWriteStatus()` and continue writing from
        the returned `committed_size`. This may be less than the amount of data the
        client previously sent.

        The service will not view the object as complete until the client has
        sent a `WriteObjectRequest` with `finish_write` set to `true`. Sending any
        requests on a stream after sending a request with `finish_write` set to
        `true` will cause an error. The client **should** check the response it
        receives to determine how much data the service was able to commit and
        whether the service views the object as complete.
        """
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def StartResumableWrite(self, request, context):
        """Starts a resumable write. How long the write operation remains valid, and
        what happens when the write operation becomes invalid, are
        service-dependent.
        """
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')

    def QueryWriteStatus(self, request, context):
        """Determines the `committed_size` for an object that is being written, which
        can then be used as the `write_offset` for the next `Write()` call.

        If the object does not exist (i.e., the object has been deleted, or the
        first `Write()` has not yet reached the service), this method returns the
        error `NOT_FOUND`.

        The client **may** call `QueryWriteStatus()` at any time to determine how
        much data has been processed for this object. This is useful if the
        client is buffering data and needs to know which data can be safely
        evicted. For any sequence of `QueryWriteStatus()` calls for a given
        object name, the sequence of returned `committed_size` values will be
        non-decreasing.
        """
        context.set_code(grpc.StatusCode.UNIMPLEMENTED)
        context.set_details('Method not implemented!')
        raise NotImplementedError('Method not implemented!')


def add_StorageServicer_to_server(servicer, server):
    rpc_method_handlers = {
            'ReadObject': grpc.unary_stream_rpc_method_handler(
                    servicer.ReadObject,
                    request_deserializer=google_dot_storage_dot_v2_dot_storage__pb2.ReadObjectRequest.FromString,
                    response_serializer=google_dot_storage_dot_v2_dot_storage__pb2.ReadObjectResponse.SerializeToString,
            ),
            'WriteObject': grpc.stream_unary_rpc_method_handler(
                    servicer.WriteObject,
                    request_deserializer=google_dot_storage_dot_v2_dot_storage__pb2.WriteObjectRequest.FromString,
                    response_serializer=google_dot_storage_dot_v2_dot_storage__pb2.WriteObjectResponse.SerializeToString,
            ),
            'StartResumableWrite': grpc.unary_unary_rpc_method_handler(
                    servicer.StartResumableWrite,
                    request_deserializer=google_dot_storage_dot_v2_dot_storage__pb2.StartResumableWriteRequest.FromString,
                    response_serializer=google_dot_storage_dot_v2_dot_storage__pb2.StartResumableWriteResponse.SerializeToString,
            ),
            'QueryWriteStatus': grpc.unary_unary_rpc_method_handler(
                    servicer.QueryWriteStatus,
                    request_deserializer=google_dot_storage_dot_v2_dot_storage__pb2.QueryWriteStatusRequest.FromString,
                    response_serializer=google_dot_storage_dot_v2_dot_storage__pb2.QueryWriteStatusResponse.SerializeToString,
            ),
    }
    generic_handler = grpc.method_handlers_generic_handler(
            'google.storage.v2.Storage', rpc_method_handlers)
    server.add_generic_rpc_handlers((generic_handler,))


 # This class is part of an EXPERIMENTAL API.
class Storage(object):
    """Manages Google Cloud Storage resources.
    """

    @staticmethod
    def ReadObject(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_stream(request, target, '/google.storage.v2.Storage/ReadObject',
            google_dot_storage_dot_v2_dot_storage__pb2.ReadObjectRequest.SerializeToString,
            google_dot_storage_dot_v2_dot_storage__pb2.ReadObjectResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def WriteObject(request_iterator,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.stream_unary(request_iterator, target, '/google.storage.v2.Storage/WriteObject',
            google_dot_storage_dot_v2_dot_storage__pb2.WriteObjectRequest.SerializeToString,
            google_dot_storage_dot_v2_dot_storage__pb2.WriteObjectResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def StartResumableWrite(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/google.storage.v2.Storage/StartResumableWrite',
            google_dot_storage_dot_v2_dot_storage__pb2.StartResumableWriteRequest.SerializeToString,
            google_dot_storage_dot_v2_dot_storage__pb2.StartResumableWriteResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)

    @staticmethod
    def QueryWriteStatus(request,
            target,
            options=(),
            channel_credentials=None,
            call_credentials=None,
            insecure=False,
            compression=None,
            wait_for_ready=None,
            timeout=None,
            metadata=None):
        return grpc.experimental.unary_unary(request, target, '/google.storage.v2.Storage/QueryWriteStatus',
            google_dot_storage_dot_v2_dot_storage__pb2.QueryWriteStatusRequest.SerializeToString,
            google_dot_storage_dot_v2_dot_storage__pb2.QueryWriteStatusResponse.FromString,
            options, channel_credentials,
            insecure, call_credentials, compression, wait_for_ready, timeout, metadata)
