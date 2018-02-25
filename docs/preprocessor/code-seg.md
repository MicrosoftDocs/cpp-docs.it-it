---
title: code_seg | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-tools
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- code_seg_CPP
- vc-pragma.code_seg
dev_langs:
- C++
helpviewer_keywords:
- pragmas, code_seg
- code_seg pragma
ms.assetid: bf4faac1-a511-46a6-8d9e-456851d97d56
caps.latest.revision: 
author: corob-msft
ms.author: corob
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 57511efccff22a1f1d6e7dcd957d75066b072c55
ms.sourcegitcommit: d51ed21ab2b434535f5c1d553b22e432073e1478
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 02/23/2018
---
# <a name="codeseg"></a>code_seg
Specifica il segmento di testo in cui le funzioni vengono archiviate nel file OBJ.  
  
## <a name="syntax"></a>Sintassi  
  
```  
#pragma code_seg( [ [ { push | pop }, ] [ identifier, ] ] [ "segment-name" [, "segment-class" ] )  
```  
  
## <a name="remarks"></a>Note  
 La direttiva pragma `code_seg` non controlla il posizionamento di codice oggetto generato per modelli di cui sono state create istanze, né di codice generato in modo implicito dal compilatore, ad esempio funzioni membro speciali. È consigliabile utilizzare il [__declspec(code_seg(...)) ](../cpp/code-seg-declspec.md) attributo poiché consente di controllare il posizionamento del codice oggetto. È incluso il codice generato dal compilatore.  
  
 Oggetto *segmento* in un obj file è un blocco denominato di dati che viene caricati in memoria come unità. Oggetto *segmento di testo* è un segmento contenente codice eseguibile. In questo articolo i termini *segmento* e *sezione* vengono utilizzati in modo intercambiabile.  
  
 La direttiva pragma `code_seg` indica al compilatore di inserire tutto il codice oggetto successivo dall'unità di conversione in un segmento di testo denominato `segment-name`. Per impostazione predefinita, il segmento di testo utilizzato per le funzioni in un file OBJ viene denominato .text.  
  
 Una direttiva pragma `code_seg` senza parametri reimposta il nome del segmento di testo per il codice oggetto successivo su .text.  
  
 **push** (facoltativo)  
 Inserisce un record nello stack interno del compilatore. Oggetto **push** può avere un `identifier` e `segment-name`.  
  
 **POP** (facoltativo)  
 Rimuove un record dall'inizio dello stack interno del compilatore.  
  
 `identifier` (facoltativo)  
 Se usato con **push**, assegna un nome al record nello stack del compilatore interno. Se usato con **pop**, estrae record dallo stack interno finché non `identifier` viene rimosso; se `identifier` non trovato nello stack interno, nulla viene estratto.  
  
 `identifier` consente a più record con uno **pop** comando.  
  
 "`segment-name`" (facoltativo)  
 Nome di un segmento. Se usato con **pop**, viene visualizzato lo stack e `segment-name` diventa il nome del segmento di testo attivo.  
  
 "`segment-class`" (facoltativo)  
 Ignorato, ma incluso per compatibilità con le versioni di C++ precedenti alla versione 2.0.  
  
 È possibile utilizzare il [DUMPBIN. EXE](../build/reference/dumpbin-command-line.md) applicazione per visualizzare i file obj. Versioni di DUMPBIN per ogni architettura di destinazione supportata sono incluse con [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
## <a name="example"></a>Esempio  
 In questo esempio viene illustrato come utilizzare la direttiva pragma `code_seg` per controllare il posizionamento del codice oggetto:  
  
```  
// pragma_directive_code_seg.cpp  
void func1() {                  // stored in .text  
}  
  
#pragma code_seg(".my_data1")  
void func2() {                  // stored in my_data1  
}  
  
#pragma code_seg(push, r1, ".my_data2")  
void func3() {                  // stored in my_data2  
}  
  
#pragma code_seg(pop, r1)      // stored in my_data1  
void func4() {  
}  
  
int main() {  
}  
```  
  
 Per un elenco di nomi che non deve essere utilizzato per creare una sezione, vedere [/sezione](../build/reference/section-specify-section-attributes.md).  
  
 È inoltre possibile specificare le sezioni per i dati inizializzati ([data_seg](../preprocessor/data-seg.md)), dati non inizializzati ([bss_seg](../preprocessor/bss-seg.md)) e le variabili const ([const_seg](../preprocessor/const-seg.md)).  
  
## <a name="see-also"></a>Vedere anche  
 [code_seg (__declspec)](../cpp/code-seg-declspec.md)   
 [Direttive pragma e parola chiave __Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)