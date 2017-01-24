---
title: "code_seg | Microsoft Docs"
ms.custom: ""
ms.date: "12/15/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "code_seg_CPP"
  - "vc-pragma.code_seg"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "code_seg (pragma)"
  - "pragma, code_seg"
ms.assetid: bf4faac1-a511-46a6-8d9e-456851d97d56
caps.latest.revision: 9
caps.handback.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# code_seg
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Specifica il segmento di testo in cui le funzioni vengono archiviate nel file OBJ.  
  
## Sintassi  
  
```  
#pragma code_seg( [ [ { push | pop }, ] [ identifier, ] ] [ "segment-name" [, "segment-class" ] )  
```  
  
## Note  
 La direttiva pragma `code_seg` non controlla il posizionamento di codice oggetto generato per modelli di cui sono state create istanze, né di codice generato in modo implicito dal compilatore, ad esempio funzioni membro speciali.  In alternativa, è consigliabile utilizzare l'attributo [\_\_declspec \(code\_seg \(...\)\)](../cpp/code-seg-declspec.md) in quanto consente il controllo sul posizionamento del codice oggetto.  È incluso il codice generato dal compilatore.  
  
 Un *segmento* di un file OBJ è un blocco denominato di dati caricati in memoria come unità.  Un *segmento di testo* è un segmento contenente codice eseguibile.  In questo articolo i termini *segmento* e *sezione* vengono utilizzati in modo intercambiabile.  
  
 La direttiva pragma `code_seg` indica al compilatore di inserire tutto il codice oggetto successivo dall'unità di conversione in un segmento di testo denominato `segment-name`.  Per impostazione predefinita, il segmento di testo utilizzato per le funzioni in un file OBJ viene denominato .text.  
  
 Una direttiva pragma `code_seg` senza parametri reimposta il nome del segmento di testo per il codice oggetto successivo su .text.  
  
 **Push** \(facoltativo\)  
 Inserisce un record nello stack interno del compilatore.  **push** può presentare un elemento `identifier` e un elemento `segment-name`.  
  
 **pop** \(facoltativo\)  
 Rimuove un record dall'inizio dello stack interno del compilatore.  
  
 `identifier` \(facoltativo\)  
 Se utilizzato con **push**, assegna un nome al record nello stack del compilatore interno.  Se utilizzato con **pop**, estrae record dallo stack interno finché non viene rimosso `identifier`; se `identifier` non viene trovato nello stack interno, nulla viene estratto.  
  
 `identifier` consente la visualizzazione di più record con un solo comando **pop**.  
  
 "`segment-name`" \(facoltativo\)  
 Nome di un segmento.  Se utilizzato con **pop**, viene visualizzato lo stack e `segment-name` diventa il nome del segmento di testo attivo.  
  
 "`segment-class`" \(facoltativo\)  
 Ignorato, ma incluso per compatibilità con le versioni di C\+\+ precedenti alla versione 2.0.  
  
 È possibile utilizzare l'applicazione [DUMPBIN.EXE](../build/reference/dumpbin-command-line.md) per visualizzare i file OBJ.  Versioni di DUMPBIN per ogni architettura di destinazione supportata sono incluse con [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)].  
  
## Esempio  
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
  
 Per un elenco di nomi da non utilizzare per creare una sezione, vedere [\/SECTION](../build/reference/section-specify-section-attributes.md).  
  
 È inoltre possibile specificare le sezioni per dati inizializzati \([data\_seg](../preprocessor/data-seg.md)\), dati non inizializzati \([bss\_seg](../preprocessor/bss-seg.md)\) e variabili const \([const\_seg](../preprocessor/const-seg.md)\).  
  
## Vedere anche  
 [code\_seg \(\_\_declspec\)](../cpp/code-seg-declspec.md)   
 [Direttive pragma e parola chiave \_\_Pragma](../preprocessor/pragma-directives-and-the-pragma-keyword.md)