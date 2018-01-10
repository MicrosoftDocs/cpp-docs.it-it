---
title: data_seg | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-tools
ms.tgt_pltfrm: 
ms.topic: article
f1_keywords:
- data_seg_CPP
- vc-pragma.data_seg
dev_langs: C++
helpviewer_keywords:
- data_seg pragma
- pragmas, data_seg
ms.assetid: 65c66466-4c98-494f-93af-106beb4caf78
caps.latest.revision: "8"
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: dbc581e1237b25404b611e24bf8af46af4a166b3
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="dataseg"></a>data_seg
Specifica il segmento di dati in cui le variabili inizializzate vengono archiviate nel file .obj.  
  
## <a name="syntax"></a>Sintassi  
  
```  
  
#pragma data_seg( [ [ { push | pop }, ] [ identifier, ] ] [ "segment-name" [, "segment-class" ] )  
```  
  
## <a name="remarks"></a>Note  
 Il significato dei termini *segmento* e *sezione* sono intercambiabili in questo argomento.  
  
 File con estensione OBJ possono essere visualizzati con il [dumpbin](../build/reference/dumpbin-command-line.md) dell'applicazione. Il segmento predefinito nel file .obj per le variabili inizializzate è .data. Le variabili che non sono inizializzate sono considerate inizializzate sul valore zero e vengono archiviate nel segmento .bss.  
  
 **data_seg** senza parametri Reimposta il segmento su. Data.  
  
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
// pragma_directive_data_seg.cpp  
int h = 1;                     // stored in .data  
int i = 0;                     // stored in .bss  
#pragma data_seg(".my_data1")  
int j = 1;                     // stored in "my_data1"  
  
#pragma data_seg(push, stack1, ".my_data2")     
int l = 2;                     // stored in "my_data2"  
  
#pragma data_seg(pop, stack1)   // pop stack1 off the stack  
int m = 3;                     // stored in "stack_data1"  
  
int main() {  
}  
```  
  
 I dati allocati mediante **data_seg** non mantengono le informazioni sulla posizione.  
  
 Vedere [/sezione](../build/reference/section-specify-section-attributes.md) per un elenco di nomi di non utilizzare durante la creazione di una sezione.  
  
 È inoltre possibile specificare le sezioni per le variabili const ([const_seg](../preprocessor/const-seg.md)), dati non inizializzati ([bss_seg](../preprocessor/bss-seg.md)) e funzioni ([code_seg](../preprocessor/code-seg.md)).  
  
## <a name="see-also"></a>Vedere anche  
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)