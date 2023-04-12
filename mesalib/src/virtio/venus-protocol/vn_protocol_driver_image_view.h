/* This file is generated by venus-protocol.  See vn_protocol_driver.h. */

/*
 * Copyright 2020 Google LLC
 * SPDX-License-Identifier: MIT
 */

#ifndef VN_PROTOCOL_DRIVER_IMAGE_VIEW_H
#define VN_PROTOCOL_DRIVER_IMAGE_VIEW_H

#include "vn_instance.h"
#include "vn_protocol_driver_structs.h"

/* struct VkImageViewUsageCreateInfo chain */

static inline size_t
vn_sizeof_VkImageViewUsageCreateInfo_pnext(const void *val)
{
    /* no known/supported struct */
    return vn_sizeof_simple_pointer(NULL);
}

static inline size_t
vn_sizeof_VkImageViewUsageCreateInfo_self(const VkImageViewUsageCreateInfo *val)
{
    size_t size = 0;
    /* skip val->{sType,pNext} */
    size += vn_sizeof_VkFlags(&val->usage);
    return size;
}

static inline size_t
vn_sizeof_VkImageViewUsageCreateInfo(const VkImageViewUsageCreateInfo *val)
{
    size_t size = 0;

    size += vn_sizeof_VkStructureType(&val->sType);
    size += vn_sizeof_VkImageViewUsageCreateInfo_pnext(val->pNext);
    size += vn_sizeof_VkImageViewUsageCreateInfo_self(val);

    return size;
}

static inline void
vn_encode_VkImageViewUsageCreateInfo_pnext(struct vn_cs_encoder *enc, const void *val)
{
    /* no known/supported struct */
    vn_encode_simple_pointer(enc, NULL);
}

static inline void
vn_encode_VkImageViewUsageCreateInfo_self(struct vn_cs_encoder *enc, const VkImageViewUsageCreateInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_encode_VkFlags(enc, &val->usage);
}

static inline void
vn_encode_VkImageViewUsageCreateInfo(struct vn_cs_encoder *enc, const VkImageViewUsageCreateInfo *val)
{
    assert(val->sType == VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO);
    vn_encode_VkStructureType(enc, &(VkStructureType){ VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO });
    vn_encode_VkImageViewUsageCreateInfo_pnext(enc, val->pNext);
    vn_encode_VkImageViewUsageCreateInfo_self(enc, val);
}

/* struct VkImageViewMinLodCreateInfoEXT chain */

static inline size_t
vn_sizeof_VkImageViewMinLodCreateInfoEXT_pnext(const void *val)
{
    /* no known/supported struct */
    return vn_sizeof_simple_pointer(NULL);
}

static inline size_t
vn_sizeof_VkImageViewMinLodCreateInfoEXT_self(const VkImageViewMinLodCreateInfoEXT *val)
{
    size_t size = 0;
    /* skip val->{sType,pNext} */
    size += vn_sizeof_float(&val->minLod);
    return size;
}

static inline size_t
vn_sizeof_VkImageViewMinLodCreateInfoEXT(const VkImageViewMinLodCreateInfoEXT *val)
{
    size_t size = 0;

    size += vn_sizeof_VkStructureType(&val->sType);
    size += vn_sizeof_VkImageViewMinLodCreateInfoEXT_pnext(val->pNext);
    size += vn_sizeof_VkImageViewMinLodCreateInfoEXT_self(val);

    return size;
}

static inline void
vn_encode_VkImageViewMinLodCreateInfoEXT_pnext(struct vn_cs_encoder *enc, const void *val)
{
    /* no known/supported struct */
    vn_encode_simple_pointer(enc, NULL);
}

static inline void
vn_encode_VkImageViewMinLodCreateInfoEXT_self(struct vn_cs_encoder *enc, const VkImageViewMinLodCreateInfoEXT *val)
{
    /* skip val->{sType,pNext} */
    vn_encode_float(enc, &val->minLod);
}

static inline void
vn_encode_VkImageViewMinLodCreateInfoEXT(struct vn_cs_encoder *enc, const VkImageViewMinLodCreateInfoEXT *val)
{
    assert(val->sType == VK_STRUCTURE_TYPE_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT);
    vn_encode_VkStructureType(enc, &(VkStructureType){ VK_STRUCTURE_TYPE_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT });
    vn_encode_VkImageViewMinLodCreateInfoEXT_pnext(enc, val->pNext);
    vn_encode_VkImageViewMinLodCreateInfoEXT_self(enc, val);
}

/* struct VkImageViewCreateInfo chain */

static inline size_t
vn_sizeof_VkImageViewCreateInfo_pnext(const void *val)
{
    const VkBaseInStructure *pnext = val;
    size_t size = 0;

    while (pnext) {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO:
            size += vn_sizeof_simple_pointer(pnext);
            size += vn_sizeof_VkStructureType(&pnext->sType);
            size += vn_sizeof_VkImageViewCreateInfo_pnext(pnext->pNext);
            size += vn_sizeof_VkImageViewUsageCreateInfo_self((const VkImageViewUsageCreateInfo *)pnext);
            return size;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO:
            size += vn_sizeof_simple_pointer(pnext);
            size += vn_sizeof_VkStructureType(&pnext->sType);
            size += vn_sizeof_VkImageViewCreateInfo_pnext(pnext->pNext);
            size += vn_sizeof_VkSamplerYcbcrConversionInfo_self((const VkSamplerYcbcrConversionInfo *)pnext);
            return size;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT:
            if (!vn_cs_renderer_protocol_has_extension(392 /* VK_EXT_image_view_min_lod */))
                break;
            size += vn_sizeof_simple_pointer(pnext);
            size += vn_sizeof_VkStructureType(&pnext->sType);
            size += vn_sizeof_VkImageViewCreateInfo_pnext(pnext->pNext);
            size += vn_sizeof_VkImageViewMinLodCreateInfoEXT_self((const VkImageViewMinLodCreateInfoEXT *)pnext);
            return size;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    }

    return vn_sizeof_simple_pointer(NULL);
}

static inline size_t
vn_sizeof_VkImageViewCreateInfo_self(const VkImageViewCreateInfo *val)
{
    size_t size = 0;
    /* skip val->{sType,pNext} */
    size += vn_sizeof_VkFlags(&val->flags);
    size += vn_sizeof_VkImage(&val->image);
    size += vn_sizeof_VkImageViewType(&val->viewType);
    size += vn_sizeof_VkFormat(&val->format);
    size += vn_sizeof_VkComponentMapping(&val->components);
    size += vn_sizeof_VkImageSubresourceRange(&val->subresourceRange);
    return size;
}

static inline size_t
vn_sizeof_VkImageViewCreateInfo(const VkImageViewCreateInfo *val)
{
    size_t size = 0;

    size += vn_sizeof_VkStructureType(&val->sType);
    size += vn_sizeof_VkImageViewCreateInfo_pnext(val->pNext);
    size += vn_sizeof_VkImageViewCreateInfo_self(val);

    return size;
}

static inline void
vn_encode_VkImageViewCreateInfo_pnext(struct vn_cs_encoder *enc, const void *val)
{
    const VkBaseInStructure *pnext = val;

    while (pnext) {
        switch ((int32_t)pnext->sType) {
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_USAGE_CREATE_INFO:
            vn_encode_simple_pointer(enc, pnext);
            vn_encode_VkStructureType(enc, &pnext->sType);
            vn_encode_VkImageViewCreateInfo_pnext(enc, pnext->pNext);
            vn_encode_VkImageViewUsageCreateInfo_self(enc, (const VkImageViewUsageCreateInfo *)pnext);
            return;
        case VK_STRUCTURE_TYPE_SAMPLER_YCBCR_CONVERSION_INFO:
            vn_encode_simple_pointer(enc, pnext);
            vn_encode_VkStructureType(enc, &pnext->sType);
            vn_encode_VkImageViewCreateInfo_pnext(enc, pnext->pNext);
            vn_encode_VkSamplerYcbcrConversionInfo_self(enc, (const VkSamplerYcbcrConversionInfo *)pnext);
            return;
        case VK_STRUCTURE_TYPE_IMAGE_VIEW_MIN_LOD_CREATE_INFO_EXT:
            if (!vn_cs_renderer_protocol_has_extension(392 /* VK_EXT_image_view_min_lod */))
                break;
            vn_encode_simple_pointer(enc, pnext);
            vn_encode_VkStructureType(enc, &pnext->sType);
            vn_encode_VkImageViewCreateInfo_pnext(enc, pnext->pNext);
            vn_encode_VkImageViewMinLodCreateInfoEXT_self(enc, (const VkImageViewMinLodCreateInfoEXT *)pnext);
            return;
        default:
            /* ignore unknown/unsupported struct */
            break;
        }
        pnext = pnext->pNext;
    }

    vn_encode_simple_pointer(enc, NULL);
}

static inline void
vn_encode_VkImageViewCreateInfo_self(struct vn_cs_encoder *enc, const VkImageViewCreateInfo *val)
{
    /* skip val->{sType,pNext} */
    vn_encode_VkFlags(enc, &val->flags);
    vn_encode_VkImage(enc, &val->image);
    vn_encode_VkImageViewType(enc, &val->viewType);
    vn_encode_VkFormat(enc, &val->format);
    vn_encode_VkComponentMapping(enc, &val->components);
    vn_encode_VkImageSubresourceRange(enc, &val->subresourceRange);
}

static inline void
vn_encode_VkImageViewCreateInfo(struct vn_cs_encoder *enc, const VkImageViewCreateInfo *val)
{
    assert(val->sType == VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO);
    vn_encode_VkStructureType(enc, &(VkStructureType){ VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO });
    vn_encode_VkImageViewCreateInfo_pnext(enc, val->pNext);
    vn_encode_VkImageViewCreateInfo_self(enc, val);
}

static inline size_t vn_sizeof_vkCreateImageView(VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView)
{
    const VkCommandTypeEXT cmd_type = VK_COMMAND_TYPE_vkCreateImageView_EXT;
    const VkFlags cmd_flags = 0;
    size_t cmd_size = vn_sizeof_VkCommandTypeEXT(&cmd_type) + vn_sizeof_VkFlags(&cmd_flags);

    cmd_size += vn_sizeof_VkDevice(&device);
    cmd_size += vn_sizeof_simple_pointer(pCreateInfo);
    if (pCreateInfo)
        cmd_size += vn_sizeof_VkImageViewCreateInfo(pCreateInfo);
    cmd_size += vn_sizeof_simple_pointer(pAllocator);
    if (pAllocator)
        assert(false);
    cmd_size += vn_sizeof_simple_pointer(pView);
    if (pView)
        cmd_size += vn_sizeof_VkImageView(pView);

    return cmd_size;
}

static inline void vn_encode_vkCreateImageView(struct vn_cs_encoder *enc, VkCommandFlagsEXT cmd_flags, VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView)
{
    const VkCommandTypeEXT cmd_type = VK_COMMAND_TYPE_vkCreateImageView_EXT;

    vn_encode_VkCommandTypeEXT(enc, &cmd_type);
    vn_encode_VkFlags(enc, &cmd_flags);

    vn_encode_VkDevice(enc, &device);
    if (vn_encode_simple_pointer(enc, pCreateInfo))
        vn_encode_VkImageViewCreateInfo(enc, pCreateInfo);
    if (vn_encode_simple_pointer(enc, pAllocator))
        assert(false);
    if (vn_encode_simple_pointer(enc, pView))
        vn_encode_VkImageView(enc, pView);
}

static inline size_t vn_sizeof_vkCreateImageView_reply(VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView)
{
    const VkCommandTypeEXT cmd_type = VK_COMMAND_TYPE_vkCreateImageView_EXT;
    size_t cmd_size = vn_sizeof_VkCommandTypeEXT(&cmd_type);

    VkResult ret;
    cmd_size += vn_sizeof_VkResult(&ret);
    /* skip device */
    /* skip pCreateInfo */
    /* skip pAllocator */
    cmd_size += vn_sizeof_simple_pointer(pView);
    if (pView)
        cmd_size += vn_sizeof_VkImageView(pView);

    return cmd_size;
}

static inline VkResult vn_decode_vkCreateImageView_reply(struct vn_cs_decoder *dec, VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView)
{
    VkCommandTypeEXT command_type;
    vn_decode_VkCommandTypeEXT(dec, &command_type);
    assert(command_type == VK_COMMAND_TYPE_vkCreateImageView_EXT);

    VkResult ret;
    vn_decode_VkResult(dec, &ret);
    /* skip device */
    /* skip pCreateInfo */
    /* skip pAllocator */
    if (vn_decode_simple_pointer(dec)) {
        vn_decode_VkImageView(dec, pView);
    } else {
        pView = NULL;
    }

    return ret;
}

static inline size_t vn_sizeof_vkDestroyImageView(VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator)
{
    const VkCommandTypeEXT cmd_type = VK_COMMAND_TYPE_vkDestroyImageView_EXT;
    const VkFlags cmd_flags = 0;
    size_t cmd_size = vn_sizeof_VkCommandTypeEXT(&cmd_type) + vn_sizeof_VkFlags(&cmd_flags);

    cmd_size += vn_sizeof_VkDevice(&device);
    cmd_size += vn_sizeof_VkImageView(&imageView);
    cmd_size += vn_sizeof_simple_pointer(pAllocator);
    if (pAllocator)
        assert(false);

    return cmd_size;
}

static inline void vn_encode_vkDestroyImageView(struct vn_cs_encoder *enc, VkCommandFlagsEXT cmd_flags, VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator)
{
    const VkCommandTypeEXT cmd_type = VK_COMMAND_TYPE_vkDestroyImageView_EXT;

    vn_encode_VkCommandTypeEXT(enc, &cmd_type);
    vn_encode_VkFlags(enc, &cmd_flags);

    vn_encode_VkDevice(enc, &device);
    vn_encode_VkImageView(enc, &imageView);
    if (vn_encode_simple_pointer(enc, pAllocator))
        assert(false);
}

static inline size_t vn_sizeof_vkDestroyImageView_reply(VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator)
{
    const VkCommandTypeEXT cmd_type = VK_COMMAND_TYPE_vkDestroyImageView_EXT;
    size_t cmd_size = vn_sizeof_VkCommandTypeEXT(&cmd_type);

    /* skip device */
    /* skip imageView */
    /* skip pAllocator */

    return cmd_size;
}

static inline void vn_decode_vkDestroyImageView_reply(struct vn_cs_decoder *dec, VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator)
{
    VkCommandTypeEXT command_type;
    vn_decode_VkCommandTypeEXT(dec, &command_type);
    assert(command_type == VK_COMMAND_TYPE_vkDestroyImageView_EXT);

    /* skip device */
    /* skip imageView */
    /* skip pAllocator */
}

static inline void vn_submit_vkCreateImageView(struct vn_instance *vn_instance, VkCommandFlagsEXT cmd_flags, VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView, struct vn_instance_submit_command *submit)
{
    uint8_t local_cmd_data[VN_SUBMIT_LOCAL_CMD_SIZE];
    void *cmd_data = local_cmd_data;
    size_t cmd_size = vn_sizeof_vkCreateImageView(device, pCreateInfo, pAllocator, pView);
    if (cmd_size > sizeof(local_cmd_data)) {
        cmd_data = malloc(cmd_size);
        if (!cmd_data)
            cmd_size = 0;
    }
    const size_t reply_size = cmd_flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT ? vn_sizeof_vkCreateImageView_reply(device, pCreateInfo, pAllocator, pView) : 0;

    struct vn_cs_encoder *enc = vn_instance_submit_command_init(vn_instance, submit, cmd_data, cmd_size, reply_size);
    if (cmd_size) {
        vn_encode_vkCreateImageView(enc, cmd_flags, device, pCreateInfo, pAllocator, pView);
        vn_instance_submit_command(vn_instance, submit);
        if (cmd_data != local_cmd_data)
            free(cmd_data);
    }
}

static inline void vn_submit_vkDestroyImageView(struct vn_instance *vn_instance, VkCommandFlagsEXT cmd_flags, VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator, struct vn_instance_submit_command *submit)
{
    uint8_t local_cmd_data[VN_SUBMIT_LOCAL_CMD_SIZE];
    void *cmd_data = local_cmd_data;
    size_t cmd_size = vn_sizeof_vkDestroyImageView(device, imageView, pAllocator);
    if (cmd_size > sizeof(local_cmd_data)) {
        cmd_data = malloc(cmd_size);
        if (!cmd_data)
            cmd_size = 0;
    }
    const size_t reply_size = cmd_flags & VK_COMMAND_GENERATE_REPLY_BIT_EXT ? vn_sizeof_vkDestroyImageView_reply(device, imageView, pAllocator) : 0;

    struct vn_cs_encoder *enc = vn_instance_submit_command_init(vn_instance, submit, cmd_data, cmd_size, reply_size);
    if (cmd_size) {
        vn_encode_vkDestroyImageView(enc, cmd_flags, device, imageView, pAllocator);
        vn_instance_submit_command(vn_instance, submit);
        if (cmd_data != local_cmd_data)
            free(cmd_data);
    }
}

static inline VkResult vn_call_vkCreateImageView(struct vn_instance *vn_instance, VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView)
{
    VN_TRACE_FUNC();

    struct vn_instance_submit_command submit;
    vn_submit_vkCreateImageView(vn_instance, VK_COMMAND_GENERATE_REPLY_BIT_EXT, device, pCreateInfo, pAllocator, pView, &submit);
    struct vn_cs_decoder *dec = vn_instance_get_command_reply(vn_instance, &submit);
    if (dec) {
        const VkResult ret = vn_decode_vkCreateImageView_reply(dec, device, pCreateInfo, pAllocator, pView);
        vn_instance_free_command_reply(vn_instance, &submit);
        return ret;
    } else {
        return VK_ERROR_OUT_OF_HOST_MEMORY;
    }
}

static inline void vn_async_vkCreateImageView(struct vn_instance *vn_instance, VkDevice device, const VkImageViewCreateInfo* pCreateInfo, const VkAllocationCallbacks* pAllocator, VkImageView* pView)
{
    struct vn_instance_submit_command submit;
    vn_submit_vkCreateImageView(vn_instance, 0, device, pCreateInfo, pAllocator, pView, &submit);
}

static inline void vn_call_vkDestroyImageView(struct vn_instance *vn_instance, VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator)
{
    VN_TRACE_FUNC();

    struct vn_instance_submit_command submit;
    vn_submit_vkDestroyImageView(vn_instance, VK_COMMAND_GENERATE_REPLY_BIT_EXT, device, imageView, pAllocator, &submit);
    struct vn_cs_decoder *dec = vn_instance_get_command_reply(vn_instance, &submit);
    if (dec) {
        vn_decode_vkDestroyImageView_reply(dec, device, imageView, pAllocator);
        vn_instance_free_command_reply(vn_instance, &submit);
    }
}

static inline void vn_async_vkDestroyImageView(struct vn_instance *vn_instance, VkDevice device, VkImageView imageView, const VkAllocationCallbacks* pAllocator)
{
    struct vn_instance_submit_command submit;
    vn_submit_vkDestroyImageView(vn_instance, 0, device, imageView, pAllocator, &submit);
}

#endif /* VN_PROTOCOL_DRIVER_IMAGE_VIEW_H */
