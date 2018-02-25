---
title: Struttura atomic | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-standard-libraries
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- atomic/std::atomic
dev_langs:
- C++
ms.assetid: 261628ed-7049-41ac-99b9-cfe49f696b44
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: e5e7de7a5098aec10618c961444eb73b4597d0fc
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="atomic-structure"></a>Struttura atomic
Descrive un oggetto che esegue operazioni atomiche in un valore archiviato di tipo `Ty`.  
  
## <a name="syntax"></a>Sintassi  
  
```
template <class Ty>
struct atomic;
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[atomic](http://msdn.microsoft.com/Library/a538c43f-4d48-4308-ae1b-bab1839bccb8)|Costruisce un oggetto atomico.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[Operatore atomic::operator Ty](http://msdn.microsoft.com/Library/a366c700-c7a0-4bcb-8eb4-4b57dfaea065)|Legge e restituisce il valore archiviato. ([atomic::load](http://msdn.microsoft.com/Library/05212726-cf8a-46fe-83d2-c16ac2abb7d1))|  
|[Operatore atomic::operator=](http://msdn.microsoft.com/Library/fe161d57-47ae-4bad-92bf-ce32ac8d5953)|Usa un valore specificato per sostituire il valore archiviato. ([atomic::store](http://msdn.microsoft.com/Library/84759413-d664-47ef-a1f3-a73c5a62007b))|  
|[Operatore atomic::operator++](http://msdn.microsoft.com/Library/492959e9-1ea8-4e02-a031-82b1b92e91a0)|Incrementa il valore archiviato. Usato solo da specializzazioni integrali e dei puntatori.|  
|[Operatore atomic::operator+=](http://msdn.microsoft.com/Library/9ec97aa2-c9d7-436b-943d-2989eb2617dd)|Aggiunge un valore specificato al valore archiviato. Usato solo da specializzazioni integrali e dei puntatori.|  
|[Operatore atomic::operator--](http://msdn.microsoft.com/Library/ad7c1ea7-1f6d-4a54-bf26-07630f749864)|Decrementa il valore archiviato. Usato solo da specializzazioni integrali e dei puntatori.|  
|[Operatore atomic::operator-=](http://msdn.microsoft.com/Library/902d0d9f-88fd-4500-aa2d-1e50f443e77c)|Sottrae un valore specificato da un valore archiviato. Usato solo da specializzazioni integrali e dei puntatori.|  
|[Operatore atomic::operator&=](http://msdn.microsoft.com/Library/90e730ac-12e1-4abb-98f5-4eadd6861a89)|Esegue un `and` bit per bit in un valore specificato e nel valore archiviato. Usato solo da specializzazioni integrali.|  
|[Operatore atomic::operator&#124;=](http://msdn.microsoft.com/Library/f105eacc-31a6-4906-abba-f1cf013599b2)|Esegue un `or` bit per bit in un valore specificato e nel valore archiviato. Usato solo da specializzazioni integrali.|  
|[Operatore atomic::operator^=](http://msdn.microsoft.com/Library/f2a4da9d-67e8-4249-9161-9998e72a33c2)|Esegue un `exclusive or` bit per bit in un valore specificato e nel valore archiviato. Usato solo da specializzazioni integrali.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[compare_exchange_strong](http://msdn.microsoft.com/Library/47bbf894-b28c-4ece-959e-67b3863cf4ed)|Esegue un'operazione `atomic_compare_and_exchange` in `this` e restituisce il risultato.|  
|[compare_exchange_weak](http://msdn.microsoft.com/Library/e15e421a-f7a3-4272-993a-f487d2242e4f)|Esegue un'operazione `weak_atomic_compare_and_exchange` in `this` e restituisce il risultato.|  
|[fetch_add](http://msdn.microsoft.com/Library/c68b91f2-6e8a-4ffa-8991-6bb6d466e1f3)|Aggiunge un valore specificato al valore archiviato.|  
|[fetch_and](http://msdn.microsoft.com/Library/a9c83001-b72c-4085-9640-f63f866714b9)|Esegue un `and` bit per bit in un valore specificato e nel valore archiviato.|  
|[fetch_or](http://msdn.microsoft.com/Library/4c532f7f-80c5-432a-b34b-48feacab8dca)|Esegue un `or` bit per bit in un valore specificato e nel valore archiviato.|  
|[fetch_sub](http://msdn.microsoft.com/Library/8cc80d4b-0942-45a3-9db8-bbf339a903e4)|Sottrae un valore specificato da un valore archiviato.|  
|[fetch_xor](http://msdn.microsoft.com/Library/92bbaff8-ee29-4a1e-aee4-d9d405285bfe)|Esegue un `exclusive or` bit per bit in un valore specificato e nel valore archiviato.|  
|[is_lock_free](http://msdn.microsoft.com/Library/b99d5130-cdda-40a2-b14c-152b13a8ba45)|Specifica se le operazioni atomiche in `this` sono *senza blocco*. Un tipo atomico è *senza blocco* se nessuna operazione atomica in tale tipo usa i blocchi.|  
|[load](http://msdn.microsoft.com/Library/05212726-cf8a-46fe-83d2-c16ac2abb7d1)|Legge e restituisce il valore archiviato.|  
|[store](http://msdn.microsoft.com/Library/84759413-d664-47ef-a1f3-a73c5a62007b)|Usa un valore specificato per sostituire il valore archiviato.|  
  
## <a name="remarks"></a>Note  
 Il tipo `Ty` deve essere *facilmente copiabile*. Ovvero, l'uso di [memcpy](../c-runtime-library/reference/memcpy-wmemcpy.md) per copiarne i byte deve produrre un oggetto `Ty` valido che risulta uguale all'oggetto originale. Le funzioni membro `compare_exchange_weak` e `compare_exchange_strong` usano [memcmp](../c-runtime-library/reference/memcmp-wmemcmp.md) per determinare se due valori `Ty` sono uguali. Queste funzioni non useranno `Ty`-defined `operator==`. Le funzioni membro di `atomic` usano `memcpy` per copiare i valori di tipo `Ty`.  
  
 Per tutti i tipi di puntatore è disponibile una specializzazione parziale `atomic<Ty *>`. La specializzazione consente l'aggiunta o la sottrazione di un offset dal valore del puntatore gestito. Le operazioni aritmetiche accettano un argomento di tipo `ptrdiff_t` e modificano l'argomento in base alla dimensione di `Ty` per coerenza con l'aritmetica di indirizzo ordinaria.  
  
 È disponibile una specializzazione per ogni tipo integrale, ad eccezione di `bool`. Ogni specializzazione offre un set di metodi per le operazioni logiche e di aritmetica atomica.  
  
||||  
|-|-|-|  
|`atomic<char>`|`atomic<signed char>`|`atomic<unsigned char>`|  
|`atomic<char16_t>`|`atomic<char32_t>`|`atomic<wchar_t>`|  
|`atomic<short>`|`atomic<unsigned short>`|`atomic<int>`|  
|`atomic<unsigned int>`|`atomic<long>`|`atomic<unsigned long>`|  
|`atomic<long long>`|`atomic<unsigned long long>`|  
  
 Le specializzazioni integrali sono derivate dai tipi `atomic_integral` corrispondenti. Ad esempio, `atomic<unsigned int>` è derivato da `atomic_uint`.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** \<atomic >  
  
 **Spazio dei nomi:** std  
  
## <a name="see-also"></a>Vedere anche  
 [\<atomic>](../standard-library/atomic.md)   
 [Riferimento file di intestazione](../standard-library/cpp-standard-library-header-files.md)



