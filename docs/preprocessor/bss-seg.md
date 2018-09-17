---
title: bss_seg | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- vc-pragma.bss_seg
- bss_seg_CPP
dev_langs:
- C++
helpviewer_keywords:
- pragmas, bss_seg
- bss_seg pragma
ms.assetid: 755f0154-de51-4778-97d3-c9b24e445079
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 3c3a80e50bd0b012773a5e5a197674965f73b526
ms.sourcegitcommit: 92f2fff4ce77387b57a4546de1bd4bd464fb51b6
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/17/2018
ms.locfileid: "45711158"
---
# <a name="bssseg"></a>bss_seg
Specifica il segmento in cui le variabili non inizializzate vengono archiviate nel file obj.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma bss_seg( [ [ { push | pop }, ] [ identifier, ] ] [ "segment-name" [, "segment-class" ] )  
```  
  
## <a name="remarks"></a>Note  

File obj possono essere visualizzati con il [dumpbin](../build/reference/dumpbin-command-line.md) dell'applicazione. Il segmento predefinito nel file obj per i dati non inizializzati è bss. In alcuni casi sfrutta **bss_seg** può rendere più tempi di caricamento mediante il raggruppamento di dati non inizializzati in una sezione.  
  
**bss_seg** senza parametri Reimposta il segmento su BSS.  
  
**push**<br/>
(Facoltativo) Inserisce un record nello stack del compilatore interno. Oggetto *pu*sh * può avere un *identifier* e *nome segmento*.  
  
**pop**<br/>
(Facoltativo) Rimuove un record dall'inizio dello stack del compilatore interno.  
  
*identifier*<br/>
(Facoltativo) Quando abbinata **push**, assegna un nome al record nello stack del compilatore interno. Quando abbinata **pop**, estrae record dallo stack interno finché *identificatore* viene rimosso; se *identificatore* non viene trovato nello stack interno, nulla viene estratto.  
  
*Identificatore* consente di più record da estrarre con un'unica **pop** comando.  
  
*"segment-name"*<br/>
(Facoltativo) Il nome di un segmento. Quando abbinata **pop**, viene visualizzato lo stack e *-nome del segmento* diventa il nome del segmento attivo.  
  
*"segmento-class"*<br/>
(Facoltativo) Opzione inclusa per compatibilità con C++ precedenti alla versione 2.0. Ignorato.  
  
## <a name="example"></a>Esempio  
  
```cpp  
// pragma_directive_bss_seg.cpp  
int i;                     // stored in .bss  
#pragma bss_seg(".my_data1")  
int j;                     // stored in "my_data1"  
  
#pragma bss_seg(push, stack1, ".my_data2")     
int l;                     // stored in "my_data2"  
  
#pragma bss_seg(pop, stack1)   // pop stack1 from stack  
int m;                     // stored in "stack_data1"  
  
int main() {  
}  
```  
  
È anche possibile specificare le sezioni per i dati inizializzati ([data_seg](../preprocessor/data-seg.md)), le funzioni ([code_seg](../preprocessor/code-seg.md)) e le variabili const ([const_seg](../preprocessor/const-seg.md)).  
  
I dati allocati mediante il **bss_seg** pragma non mantengono le informazioni sulla relativa posizione.  
  
Visualizzare [/Section](../build/reference/section-specify-section-attributes.md) per un elenco dei nomi non è consigliabile usare durante la creazione di una sezione.  
  
## <a name="see-also"></a>Vedere anche  
 
[Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)