---
title: Macro &lt;allocators&gt; | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.tgt_pltfrm: 
ms.topic: article
ms.assetid: 9cb5ee07-1ff9-4594-ae32-3c8c6efb511a
caps.latest.revision: 12
manager: ghogen
translationtype: Machine Translation
ms.sourcegitcommit: da17f9af1f14df13eb3871ef9ccf785356e02de4
ms.openlocfilehash: abc1dd29ba68540a6669f7aff1bbd3dffdab616a
ms.lasthandoff: 02/24/2017

---
# <a name="ltallocatorsgt-macros"></a>Macro &lt;allocators&gt;
||||  
|-|-|-|  
|[ALLOCATOR_DECL](#allocator_decl)|[CACHE_CHUNKLIST](#cache_chunklist)|[CACHE_FREELIST](#cache_freelist)|  
|[CACHE_SUBALLOC](#cache_suballoc)|[SYNC_DEFAULT](#sync_default)|  
  
##  <a name="a-nameallocatordecla--allocatordecl"></a><a name="allocator_decl"></a>  ALLOCATOR_DECL  
 Restituisce una classe di modello allocatore.  
  
```
#define ALLOCATOR_DECL(cache, sync, name) <alloc_template>
```  
  
### <a name="remarks"></a>Note  
 La macro restituisce una definizione di modello `template <class Type> class name {.....}` e una specializzazione `template <> class name<void> {.....}` che definiscono una classe di modello allocatore che usa il filtro di sincronizzazione `sync` e una cache di tipo `cache`.  
  
 Per i compilatori che possono compilare la riassociazione, la definizione di modello risultante è simile alla seguente:  
```  
struct rebind
   {    /* convert a name<Type> to a name<Other> */
   typedef name<Other> other;
   };  
 ```  
 Per i compilatori che non possono compilare la riassociazione, la definizione di modello risultante è simile alla seguente:  
  
```
template <class Type<class name
    : public stdext::allocators::allocator_base<Type,
    sync<stdext::allocators::rts_alloc<cache>>>
{
public:
    name() {}
    template <class Other>
    name(const name<Other>&) {}
    template <class Other>
    name& operator= (const name<Other>&)
    {
        return *this;
    }
};
```  
  
##  <a name="a-namecachechunklista--cachechunklist"></a><a name="cache_chunklist"></a>  CACHE_CHUNKLIST  
 Restituisce `stdext::allocators::cache_chunklist<sizeof(Type)>`.  
  
```
#define CACHE_CHUNKLIST <cache_class>
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namecachefreelista--cachefreelist"></a><a name="cache_freelist"></a>  CACHE_FREELIST  
 Restituisce `stdext::allocators::cache_freelist<sizeof(Type), max>`.  
  
```
#define CACHE_FREELIST(max) <cache_class>
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namecachesuballoca--cachesuballoc"></a><a name="cache_suballoc"></a>  CACHE_SUBALLOC  
 Restituisce `stdext::allocators::cache_suballoc<sizeof(Type)>`.  
  
```
#define CACHE_SUBALLOC <cache_class>
```  
  
### <a name="remarks"></a>Note  
  
##  <a name="a-namesyncdefaulta--syncdefault"></a><a name="sync_default"></a>  SYNC_DEFAULT  
 Restituisce un filtro di sincronizzazione.  
  
```
#define SYNC_DEFAULT <sync_template>
```  
  
### <a name="remarks"></a>Note  
 Se un compilatore supporta la compilazione di applicazioni a thread singolo e multithread, per le applicazioni a thread singolo la macro restituisce `stdext::allocators::sync_none`; in tutti gli altri casi, restituisce `stdext::allocators::sync_shared`.  
  
## <a name="see-also"></a>Vedere anche  
 [\<allocators>](../standard-library/allocators-header.md)





