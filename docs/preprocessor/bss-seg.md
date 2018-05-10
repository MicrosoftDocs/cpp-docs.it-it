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
ms.openlocfilehash: 1b82027066e66cc51be8982a19ab6209ff236ef2
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="bssseg"></a>bss_seg
Specifica il segmento in cui le variabili non inizializzate vengono archiviate nel file obj.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
#pragma bss_seg( [ [ { push | pop }, ] [ identifier, ] ] [ "segment-name" [, "segment-class" ] )  
```  
  
## <a name="remarks"></a>Note  
 File con estensione obj possono essere visualizzati con il [dumpbin](../build/reference/dumpbin-command-line.md) dell'applicazione. Il segmento predefinito nel file obj per i dati non inizializzati è bss. In alcuni casi l'uso di **bss_seg** può velocizzare tempi di caricamento mediante il raggruppamento di dati non inizializzati in una sezione.  
  
 **bss_seg** senza parametri Reimposta il segmento su BSS.  
  
 **push**(facoltativo)  
 Inserisce un record nello stack interno del compilatore. Oggetto **push** può avere un *identificatore* e *nome segmento*.  
  
 **POP** (facoltativo)  
 Rimuove un record dall'inizio dello stack interno del compilatore.  
  
 *Identificatore* (facoltativo)  
 Se usato con **push**, assegna un nome al record nello stack del compilatore interno. Se usato con **pop**, estrae record dallo stack interno finché non *identificatore* viene rimosso; se *identificatore* non trovato nello stack interno, nulla viene estratto.  
  
 *Identificatore* consente a più record con un singolo **pop** comando.  
  
 *"segment-name"*(facoltativo)  
 Nome di un segmento. Se usato con **pop**, viene visualizzato lo stack e *nome segmento* diventa il nome del segmento attivo.  
  
 *"classe del segmento"* (facoltativo)  
 Incluso per la compatibilità con le versioni di C++ precedenti alla versione 2.0. Ignorato.  
  
## <a name="example"></a>Esempio  
  
```  
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
  
 È inoltre possibile specificare le sezioni per i dati inizializzati ([data_seg](../preprocessor/data-seg.md)), le funzioni ([code_seg](../preprocessor/code-seg.md)) e le variabili const ([const_seg](../preprocessor/const-seg.md)).  
  
 I dati allocati mediante il **bss_seg** pragma non mantengono le informazioni sulla posizione.  
  
 Vedere [/sezione](../build/reference/section-specify-section-attributes.md) per un elenco di nomi di non utilizzare durante la creazione di una sezione.  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)