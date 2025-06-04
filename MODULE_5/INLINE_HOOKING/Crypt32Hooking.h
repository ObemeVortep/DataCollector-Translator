/*
 * Declares a Crypt32Hooking class for intercepting calls to CryptUnprotectData via inline hooking.
 *
 * - Inherits from InlineHooking and Utils for hook logic and utility operations.
 * - Overrides lifecycle methods to initialize, install, and remove the hook.
 * - Defines a static hooked version of CryptUnprotectData for redirection.
 * - Maintains state for original address, backup bytes, and trampoline buffer.
 * - Configures hook parameters including patch size and memory tracking.
 *
 * Code has been redacted for ethical and security reasons.
 * 31 LOC
 */