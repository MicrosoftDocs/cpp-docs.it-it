---
title: Passaggio dei parametri | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
ms.assetid: e838ee5f-c2fe-40b0-9a23-8023c949c820
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 5ec0c5b6fe00430c8b08fefdd8781b677004085e
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32369357"
---
# <a name="parameter-passing"></a>Passaggio dei parametri
I primi quattro argomenti integer vengono passati nei registri. I valori interi vengono passati (in ordine da sinistra a destra) in RCX, RDX, R8 e R9. Argomenti 5 e versioni successive vengono passati nello stack. Tutti gli argomenti sono giustificati a destra nei registri. In questo modo il chiamato può ignorare i bit superiori del registro, se necessario e può accedere solo la parte del registro necessaria.  
  
 Gli argomenti a virgola mobile e precisione doppia vengono passati in XMM0 - XMM3 (fino a 4) con lo slot di integer (ovvero RCX, RDX, R8 e R9) che in genere utilizzato per lo slot cardinale da ignorato (vedere l'esempio) e viceversa.  
  
 [__m128](../cpp/m128.md) tipi, le matrici e le stringhe non vengono passate per valore immediato, ma piuttosto viene passato un puntatore alla memoria allocata dal chiamante. Le strutture o unioni di dimensioni di 8, 16, 32 o 64 bit a e m64 vengono passate come se fossero interi delle stesse dimensioni. Le strutture o unioni diverso da queste dimensioni vengono passate come un puntatore alla memoria allocata dal chiamante. Per questi tipi di aggregazione passata come un puntatore (inclusi \_m128), la memoria temporanea allocata dal chiamante verrà allineata a 16 byte.  
  
 Funzioni intrinseche che non si allocano spazio dello stack e non chiamano altre funzioni è possono utilizzare altri registri volatili per passare gli argomenti di registro aggiuntivi, poiché non esiste una stretta associazione tra il compilatore e l'implementazione di una funzione intrinseca. Si tratta di un'ulteriore opportunità per migliorare le prestazioni.  
  
 Il chiamato ha la responsabilità di dump i parametri nel relativo spazio di shadow se necessario.  
  
 Nella tabella seguente sono riepilogati come parametri vengono passati:  
  
|Tipo di parametro|Modalità di passaggio|  
|--------------------|----------------|  
|Virgola mobile|I primi 4 parametri - da XMM0 a XMM3. Gli altri vengono passati nello stack.|  
|Integer|I primi 4 parametri, ovvero RCX, RDX, R8, R9. Gli altri vengono passati nello stack.|  
|Funzioni di aggregazione (8, 16, 32 o 64 bit) e m64|I primi 4 parametri, ovvero RCX, RDX, R8, R9. Gli altri vengono passati nello stack.|  
|Funzioni di aggregazione (other)|Dal puntatore. I primi 4 parametri passati come puntatori in RCX, RDX, R8 e R9|  
|__m128|Dal puntatore. I primi 4 parametri passati come puntatori in RCX, RDX, R8 e R9|  
  
## <a name="example-of-argument-passing-1---all-integers"></a>Esempio 1: tutti i valori interi di passaggio di argomenti  
  
```  
func1(int a, int b, int c, int d, int e);    
// a in RCX, b in RDX, c in R8, d in R9, e pushed on stack  
```  
  
## <a name="example-of-argument-passing-2---all-floats"></a>Esempio 2 - tutti gli elementi mobili passaggio di argomenti  
  
```  
func2(float a, double b, float c, double d, float e);    
// a in XMM0, b in XMM1, c in XMM2, d in XMM3, e pushed on stack  
```  
  
## <a name="example-of-argument-passing-3---mixed-ints-and-floats"></a>Esempio 3 - misto di valori integer o float di passaggio di argomenti  
  
```  
func3(int a, double b, int c, float d);    
// a in RCX, b in XMM1, c in R8, d in XMM3  
```  
  
## <a name="example-of-argument-passing-4--m64-m128-and-aggregates"></a>Esempio 4 di passaggio di argomenti- m64, \_m128 e aggregazioni  
  
```  
func4(__m64 a, _m128 b, struct c, float d);  
// a in RCX, ptr to b in RDX, ptr to c in R8, d in XMM3  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Convenzione di chiamata](../build/calling-convention.md)