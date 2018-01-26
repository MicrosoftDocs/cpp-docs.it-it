---
title: operatore alignof | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-language
ms.tgt_pltfrm: 
ms.topic: language-reference
f1_keywords:
- alignas_cpp
- __alignof_cpp
- alignof_cpp
dev_langs: C++
helpviewer_keywords:
- alignas [C++]
- alignment of structures
- __alignof keyword [C++]
- alignof [C++]
- types [C++], alignment requirements
ms.assetid: acb1eed7-6398-40bd-b0c5-684ceb64afbc
caps.latest.revision: "11"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: faceca31928d9c49f3c1cf5b933a65767ece7453
ms.sourcegitcommit: 9a0a287d6940591523af959ebdac5affa36220da
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 01/25/2018
---
# <a name="alignof-operator"></a>Operatore __alignof
In C++11 è stato introdotto l'operatore `alignof`, che restituisce l'allineamento, in byte, del tipo specificato. Per garantire la massima portabilità, è consigliabile usare l'operatore alignof invece dell'operatore __alignof specifico di Microsoft.  
  
 **Sezione specifica Microsoft**  
  
 Restituisce un valore di tipo **size_t** che è il requisito di allineamento del tipo.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  __alignof( type )
```  
  
## <a name="remarks"></a>Note  
 Ad esempio:  
  
|Espressione|Valore|  
|----------------|-----------|  
|**__alignof( char )**|1|  
|**__alignof( short )**|2|  
|**__alignof( int )**|4|  
|**__alignof( \__int64 )**|8|  
|**__alignof( float )**|4|  
|**__alignof( double )**|8|  
|**__alignof( char\* )**|4|  
  
 Il valore `__alignof` è uguale al valore di `sizeof` per i tipi di base. Si consideri, in ogni caso, il seguente esempio:  
  
```  
typedef struct { int a; double b; } S;  
// __alignof(S) == 8  
```  
  
 In questo caso, il valore `__alignof` è il requisito di allineamento dell'elemento più grande presente nella struttura.  
  
 Analogamente, per  
  
```  
typedef __declspec(align(32)) struct { int a; } S;  
```  
  
 `__alignof(S)` è uguale a `32`.  
  
 Un utilizzo di `__alignof` sarebbe quello di parametro per una delle proprie routine di allocazione della memoria. Ad esempio, data la seguente struttura definita `S`, si potrebbe chiamare una routine di allocazione della memoria denominata `aligned_malloc` per allocare memoria su un particolare limite di allineamento.  
  
```  
typedef __declspec(align(32)) struct { int a; double b; } S;  
int n = 50; // array size  
S* p = (S*)aligned_malloc(n * sizeof(S), __alignof(S));  
```  
  
 Per altre informazioni sulla modifica dell'allineamento, vedere:  
  
-   [pack](../preprocessor/pack.md)  
  
-   [align](../cpp/align-cpp.md)  
  
-   [__unaligned](../cpp/unaligned.md)  
  
-   [/Zp (allineamento membri struct)](../build/reference/zp-struct-member-alignment.md)  
  
-   [Esempi di allineamento della struttura](../build/examples-of-structure-alignment.md) (specifico per x64)  
  
 Per altre informazioni sulle differenze nell'allineamento nel codice per x86 e x64, vedere:  
  
-   [Conflitti con il compilatore x86](../build/conflicts-with-the-x86-compiler.md)  
  
**Fine sezione specifica Microsoft**  
  
## <a name="see-also"></a>Vedere anche  
 [Espressioni con operatori unari](../cpp/expressions-with-unary-operators.md)   
 [Parole chiave](../cpp/keywords-cpp.md)