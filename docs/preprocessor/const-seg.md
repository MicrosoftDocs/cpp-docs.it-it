---
title: const_seg | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: reference
f1_keywords:
- vc-pragma.const_seg
- const_seg_CPP
dev_langs:
- C++
helpviewer_keywords:
- pragmas, const_seg
- const_seg pragma
ms.assetid: 1eb58ee2-fb0e-4a39-9621-699c8f5ef957
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 984dc392b6ffa51d662d3ab56b1c0dc0dbc92233
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/07/2018
---
# <a name="constseg"></a>const_seg
Specifica il segmento in cui [const](../cpp/const-cpp.md) le variabili vengono archiviate nel file obj.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma const_seg ( [ [ { push | pop}, ] [ identifier, ] ] [ "segment-name" [, "segment-class" ] )  
```  
  
## <a name="remarks"></a>Note  
 Il significato dei termini *segmento* e *sezione* sono intercambiabili in questo argomento.  
  
 File con estensione OBJ possono essere visualizzati con il [dumpbin](../build/reference/dumpbin-command-line.md) dell'applicazione. Il segmento predefinito nel file con estensione obj per le variabili `const` è .rdata. Alcune variabili `const`, come le variabili scalari, vengono automaticamente inserite nel flusso di codice. Il codice inline non verrà visualizzato in .rdata.  
  
 La definizione di un oggetto che richiede l'inizializzazione dinamica in un `const_seg` produce un comportamento non definito.  
  
 `#pragma const_seg` senza parametri reimposta il segmento su .rdata.  
  
 `push` (facoltativo)  
 Inserisce un record nello stack interno del compilatore. `push` può presentare un elemento `identifier` e un elemento `segment-name`.  
  
 `pop` (facoltativo)  
 Rimuove un record dall'inizio dello stack interno del compilatore.  
  
 `identifier` (facoltativo)  
 Se usato con `push`, assegna un nome al record nello stack del compilatore interno. Se usato con `pop`, estrae record dallo stack interno finché non viene rimosso `identifier`; se `identifier` non viene trovato nello stack interno, nulla viene estratto.  
  
 L'uso di `identifier` consente di visualizzare più record con un unico comando `pop`.  
  
 "`segment-name`" (facoltativo)  
 Nome di un segmento. Se usato con `pop`, viene visualizzato lo stack e `segment-name` diventa il nome del segmento attivo.  
  
 "`segment-class`" (facoltativo)  
 Incluso per la compatibilità con le versioni di C++ precedenti alla versione 2.0. Ignorato.  
  
## <a name="example"></a>Esempio  
  
```  
// pragma_directive_const_seg.cpp  
// compile with: /EHsc  
#include <iostream>  
  
const int i = 7;               // inlined, not stored in .rdata  
const char sz1[]= "test1";     // stored in .rdata  
  
#pragma const_seg(".my_data1")  
const char sz2[]= "test2";     // stored in .my_data1  
  
#pragma const_seg(push, stack1, ".my_data2")  
const char sz3[]= "test3";     // stored in .my_data2  
  
#pragma const_seg(pop, stack1) // pop stack1 from stack  
const char sz4[]= "test4";     // stored in .my_data1  
  
int main() {  
    using namespace std;  
   // const data must be referenced to be put in .obj  
   cout << sz1 << endl;  
   cout << sz2 << endl;  
   cout << sz3 << endl;  
   cout << sz4 << endl;  
}  
```  
  
```Output  
test1  
test2  
test3  
test4  
```  
  
## <a name="comments"></a>Commenti  
 Vedere [/sezione](../build/reference/section-specify-section-attributes.md) per un elenco di nomi di non utilizzare durante la creazione di una sezione.  
  
 È inoltre possibile specificare le sezioni per i dati inizializzati ([data_seg](../preprocessor/data-seg.md)), dati non inizializzati ([bss_seg](../preprocessor/bss-seg.md)) e funzioni ([code_seg](../preprocessor/code-seg.md)).  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)