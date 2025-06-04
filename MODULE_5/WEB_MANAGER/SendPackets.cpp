/*
 * Implements two versions of the SendPackets method for sending binary and structured data over network sockets.
 *
 * - One variant uses UDP to transmit raw frames in segmented packets with a metadata header for size and count.
 * - The other uses TCP to send serialized records with associated metadata and multi-part binary blocks.
 * - Both workflows utilize internal buffers, packet framing, and synchronization via atomic flags.
 * - Data is split, staged, and transmitted sequentially, with pause intervals to control flow.
 * - Socket connections are managed per session, with setup and teardown handled inline.
 *
 * Code has been redacted for ethical and security reasons.
 * 150 LOC
 */