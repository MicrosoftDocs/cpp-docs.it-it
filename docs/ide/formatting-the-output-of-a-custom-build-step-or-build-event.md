---
title: "Formattazione dell&#39;output di un&#39;istruzione di compilazione personalizzata o un evento di compilazione | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "eventi di compilazione [C++], formato output"
  - "istruzioni di compilazione [C++], formato output"
  - "compilazioni [C++], eventi di compilazione"
  - "compilazioni [C++], istruzioni di compilazione personalizzate"
  - "istruzioni di compilazione personalizzate [C++], formato output"
  - "eventi (C++), compilazione"
ms.assetid: 92ad3e38-24d7-4b89-90e6-5a16f5f998da
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
caps.handback.revision: 8
---
# Formattazione dell&#39;output di un&#39;istruzione di compilazione personalizzata o un evento di compilazione
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Se l'output di un'istruzione di compilazione personalizzata o di un evento di compilazione è formattato correttamente, gli utenti ottengono i seguenti vantaggi:  
  
-   Avvisi ed errori sono conteggiati nella finestra **Output**.  
  
-   L'output viene visualizzato nella finestra **Elenco attività**.  
  
-   Quando si fa clic sull'output nella finestra **Output** viene visualizzato l'argomento appropriato.  
  
-   Le operazioni F1 vengono abilitate nella finestra **Elenco attività** o nella finestra **Output**.  
  
 Il formato dell'output deve essere:  
  
 {*filename* \(*line\#* \[, *column\#*\]\) &#124; *toolname*} **:**  
  
 \[*any text*\] {**error** &#124; **warning**} *code\#\#\#\#***:** *localizable string*  
  
 \[ *any text* \]  
  
 Dove:  
  
-   {*a* &#124; *b*} è una scelta tra *a* o *b*.  
  
-   \[`ccc`\] è una stringa o un parametro facoltativo.  
  
 Di seguito è riportato un esempio.  
  
 C:\\*sourcefile.cpp*\(134\) : errore C2143: errore di sintassi : manca ';' prima di '}'  
  
 LINK: errore irreversibile LNK1104: impossibile aprire il file '*somelib.lib*'  
  
## Vedere anche  
 [Informazioni sulle istruzioni di compliazione personalizzate e sugli eventi di compilazione](../ide/understanding-custom-build-steps-and-build-events.md)