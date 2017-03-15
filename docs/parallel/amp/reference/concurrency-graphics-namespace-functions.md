---
title: 'Funzioni dello spazio dei nomi Concurrency:: Graphics | Documenti di Microsoft'
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: ace01cd5-29d3-4356-930e-c81a61c5f934
caps.latest.revision: 9
author: mikeblome
ms.author: mblome
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 1c17becb6bc3fb9b243a65652bf019b7fad1b8cd
ms.lasthandoff: 02/24/2017

---
# <a name="concurrencygraphics-namespace-functions"></a>Funzioni dello spazio dei nomi Concurrency:: Graphics
|||  
|-|-|  
|[Copy (funzione) (Namespace Concurrency:: Graphics)](#copy)|[copy_async (funzione) (Namespace Concurrency:: Graphics)](#copy_async)|  
  
##  <a name="a-namecopya--copy-function-concurrencygraphics-namespace"></a><a name="copy"></a>Copy (funzione) (Namespace Concurrency:: Graphics)  
 Copia una trama di origine in un buffer di destinazione, o copia di un buffer di origine in un buffer di destinazione. Il formato generale di questa funzione è `copy(src, dest)`.  
  
```  
template <
    typename _Src_type,  
    typename = typename std::enable_if<details::texture_traits<_Src_type>::is_texture, void>::type>  
>  
void copy (
    const _Src_type& _Src,  
    _Out_ void* _Dst,  
    unsigned int _Dst_byte_size);

 
template <
    typename _Src_type,  
    typename = typename std::enable_if<details::texture_traits<_Src_type>::is_texture, void>::type  
>  
void copy(
    const _Src_type& _Src,  
    const index<_Src_type::rank>& _Src_offset,  
    const extent<_Src_type::rank>& _Copy_extent,  
    _Out_ void* _Dst,  
    unsigned int _Dst_byte_size);

 
template <
    typename _Dst_type,  
    typename = typename std::enable_if<details::texture_traits<_Dst_type>::is_texture, void>::type  
>  
void copy(
    const void* _Src,  
    unsigned int _Src_byte_size, _Dst_type& _Dst);

 
template <
    typename _Dst_type,  
    typename = typename std::enable_if<details::texture_traits<_Dst_type>::is_texture, void>::type  
>  
void copy(
    const void* _Src,  
    unsigned int _Src_byte_size,  
    _Dst_type& _Dst,  
    const index<_Dst_type::rank>& _Dst_offset,  
    const extent<_Dst_type::rank>& _Copy_extent);

 
template <
    typename InputIterator,  
    typename _Dst_type,  
    typename = typename std::enable_if<details::texture_traits<_Dst_type>::is_texture, void>::type  
>  
void copy(InputIterator first, InputIterator last, _Dst_type& _Dst);

 
template <
    typename InputIterator,  
    typename _Dst_type,  
    typename = typename std::enable_if<details::texture_traits<_Dst_type>::is_texture, void>::type  
>void copy(InputIterator first, InputIterator last, _Dst_type& _Dst,  
    const index<_Dst_type::rank>& _Dst_offset,  
    const extent<_Dst_type::rank>& _Copy_extent);

 
template <
    typename _Src_type,  
    typename OutputIterator,  
    typename = typename std::enable_if<details::texture_traits<_Src_type>::is_texture&& !details::texture_traits<OutputIterator>::is_texture, void>::type  
>  
void copy(
    const _Src_type& _Src, OutputIterator _Dst);

 
template <
    typename _Src_type,  
    typename OutputIterator,  
    typename = typename std::enable_if<details::texture_traits<_Src_type>::is_texture&& !details::texture_traits<OutputIterator>::is_texture, void>::type  
>  
void copy (
    const _Src_type& _Src,  
    const index<_Src_type::rank>& _Src_offset,  
    const extent<_Src_type::rank>& _Copy_extent, OutputIterator _Dst);

 
template <
    typename _Src_type,  
    typename _Dst_type,  
    typename = typename std::enable_if<details::texture_traits<_Src_type>::is_texture&& details::texture_traits<_Dst_type>::is_texture, void>::type  
>  
void copy (
    const _Src_type& _Src, _Dst_type& _Dst);

 
template <
    typename _Src_type,  
    typename _Dst_type,  
    typename = typename std::enable_if<details::texture_traits<_Src_type>::is_texture&& details::texture_traits<_Dst_type>::is_texture,  
    void>::type 
>  
void copy (
    const _Src_type& _Src,  
    const index<_Src_type::rank>& _Src_offset, _Dst_type& _Dst,  
    const index<_Dst_type::rank>& _Dst_offset,  
    const extent<_Src_type::rank>& _Copy_extent);
```  
  
### <a name="parameters"></a>Parametri  
 `_Copy_extent`  
 L'estensione della sezione di trama da copiare.  
  
 `_Dst`  
 Oggetto da copiare.  
  
 `_Dst_byte_size`  
 Il numero di byte nella destinazione.  
  
 `_Dst_type`  
 Il tipo dell'oggetto di destinazione.  
  
 `_Dst_offset`  
 Offset nella destinazione in corrispondenza del quale iniziare la copia.  
  
 `InputIterator`  
 Il tipo di interator input.  
  
 `OutputIterator`  
 Il tipo di iteratore di output.  
  
 `_Src`  
 A un oggetto da copiare.  
  
 `_Src_byte_size`  
 Il numero di byte nell'origine.  
  
 `_Src_type`  
 Il tipo dell'oggetto di origine.  
  
 `_Src_offset`  
 L'offset in origine da cui iniziare la copia.  
  
 `first`  
 Un iteratore di inizio nel contenitore di origine.  
  
 `last`  
 Un iteratore finale nel contenitore di origine.  
  
##  <a name="a-namecopyasynca--copyasync-function-concurrencygraphics-namespace"></a><a name="copy_async"></a>copy_async (funzione) (Namespace Concurrency:: Graphics)  
 Copia in modo asincrono una trama di origine in un buffer di destinazione, o copia di un buffer di origine in un buffer di destinazione e quindi restituisce un [completion_future](completion-future-class.md) oggetto che può restare in attesa. Impossibile copiare i dati durante l'esecuzione di codice in un tasto di scelta rapida. Il formato generale di questa funzione è `copy(src, dest)`.  
  
```  
template<
    typename _Src_type,  
    typename = typename std::enable_if<details::texture_traits<_Src_type>::is_texture, void>::type  
>  
concurrency::completion_future copy_async(
    const _Src_type& _Src,  
    _Out_ void* _Dst,  
    unsigned int _Dst_byte_size);

 
template<
    typename _Src_type,  
    typename = typename std::enable_if<details::texture_traits<_Src_type>::is_texture, void>::type  
>  
concurrency::completion_future copy_async(
    const _Src_type& _Src,  
    const index<_Src_type::rank>& _Src_offset,  
    const extent<_Src_type::rank>& _Copy_extent,  
    _Out_ void* _Dst,  
    unsigned int _Dst_byte_size);

 
template <
    typename _Dst_type,  
    typename = typename std::enable_if<details::texture_traits<_Dst_type>::is_texture, void>::type  
>  
concurrency::completion_future copy_async(
    const void* _Src,  
    unsigned int _Src_byte_size, _Dst_type& _Dst);

 
template <
    typename _Dst_type,  
    typename = typename std::enable_if<details::texture_traits<_Dst_type>::is_texture, void>::type  
>  
concurrency::completion_future copy_async(
    const void* _Src,  
    unsigned int _Src_byte_size, _Dst_type& _Dst,  
    const index<_Dst_type::rank>& _Dst_offset,  
    const extent<_Dst_type::rank>& _Copy_extent);

 
template <
    typename InputIterator,  
    typename _Dst_type,  
    typename = typename std::enable_if<details::texture_traits<_Dst_type>::is_texture, void>::type  
>  
concurrency::completion_future copy_async(InputIterator first, InputIterator last, _Dst_type& _Dst);

 
template <
    typename InputIterator,  
    typename _Dst_type,  
    typename = typename std::enable_if<details::texture_traits<_Dst_type>::is_texture, void>::type  
>  
concurrency::completion_future copy_async(InputIterator first, InputIterator last, _Dst_type& _Dst,  
    const index<_Dst_type::rank>& _Dst_offset,  
    const extent<_Dst_type::rank>& _Copy_extent);

 
template <
    typename _Src_type,  
    typename OutputIterator,  
    typename = typename std::enable_if<details::texture_traits<_Src_type>::is_texture&& !details::texture_traits<OutputIterator>::is_texture, void>::type  
>  
concurrency::completion_future copy_async(_Src_type& _Src, OutputIterator _Dst);

 
template <
    typename _Src_type,  
    typename OutputIterator,  
    typename = typename std::enable_if<details::texture_traits<_Src_type>::is_texture&& !details::texture_traits<OutputIterator>::is_texture, void>::type  
>  
concurrency::completion_future copy_async(_Src_type& _Src,  
    const index<_Src_type::rank>& _Src_offset,  
    const extent<_Src_type::rank>& _Copy_extent,  
    OutputIterator _Dst);

 
template <
    typename _Src_type,  
    typename _Dst_type,  
    typename = typename std::enable_if<details::texture_traits<_Src_type>::is_texture&& details::texture_traits<_Dst_type>::is_texture, void>::type  
>  
concurrency::completion_future copy_async(_Src_type& _Src, _Dst_type& _Dst);

 
template <
    typename _Src_type,  
    typename _Dst_type,  
    typename = typename std::enable_if<details::texture_traits<_Src_type>::is_texture&& details::texture_traits<_Dst_type>::is_texture, void>::type  
>  
concurrency::completion_future copy_async(_Src_type& _Src,  
    const index<_Src_type::rank>& _Src_offset, _Dst_type &_Dst,  
    const index<_Dst_type::rank>& _Dst_offset,  
    const extent<_Src_type::rank>& _Copy_extent);
```  
  
### <a name="parameters"></a>Parametri  
 `_Copy_extent`  
 L'estensione della sezione di trama da copiare.  
  
 `_Dst`  
 Oggetto da copiare.  
  
 `_Dst_byte_size`  
 Il numero di byte nella destinazione.  
  
 `_Dst_type`  
 Il tipo dell'oggetto di destinazione.  
  
 `_Dst_offset`  
 Offset nella destinazione in corrispondenza del quale iniziare la copia.  
  
 `InputIterator`  
 Il tipo di interator input.  
  
 `OutputIterator`  
 Il tipo di iteratore di output.  
  
 `_Src`  
 A un oggetto da copiare.  
  
 `_Src_byte_size`  
 Il numero di byte nell'origine.  
  
 `_Src_type`  
 Il tipo dell'oggetto di origine.  
  
 `_Src_offset`  
 L'offset in origine da cui iniziare la copia.  
  
 `first`  
 Un iteratore di inizio nel contenitore di origine.  
  
 `last`  
 Un iteratore finale nel contenitore di origine.  
  
## <a name="see-also"></a>Vedere anche  
 [Concurrency:: Graphics Namespace](concurrency-graphics-namespace.md)

