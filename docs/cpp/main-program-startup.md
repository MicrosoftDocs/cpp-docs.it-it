---
title: "main: avvio del programma | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vc.main.startup"
  - "_tmain"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "_tmain (funzione)"
  - "punti di ingresso, programma"
  - "main (funzione), avvio del programma"
  - "avvio del programma [C++]"
  - "avvio (codice), main (funzione)"
  - "wmain (funzione)"
ms.assetid: f9581cd6-93f7-4bcd-99ec-d07c3c107dd4
caps.latest.revision: 9
caps.handback.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# main: avvio del programma
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Una speciale funzione denominata `main` è il punto iniziale di esecuzione per tutti i programmi [!INCLUDE[TLA#tla_cpp](../cpp/includes/tlasharptla_cpp_md.md)] e C.  Se si scrive il codice conforme al modello di programmazione [!INCLUDE[TLA#tla_unicode](../cpp/includes/tlasharptla_unicode_md.md)], è possibile utilizzare `wmain` che è la versione a caratteri wide di `main`.  
  
 La funzione `main` non è predefinita dal compilatore.  Deve essere fornita nel testo di programma.  
  
 La sintassi di dichiarazione per `main` è  
  
```  
int main();  
```  
  
 o, facoltativamente,  
  
```  
int main(int argc, char *argv[], char *envp[]);  
```  
  
## Sezione specifica Microsoft  
 La sintassi di dichiarazione per `wmain` è la seguente:  
  
```  
int wmain( );  
```  
  
 o, facoltativamente,  
  
```  
int wmain(int argc, wchar_t *argv[], wchar_t *envp[]);  
```  
  
 È inoltre possibile utilizzare `_tmain`, definito in TCHAR.h.  `_tmain` si risolve in `main` a meno che \_UNICODE non sia definito.  In tal caso, `_tmain` si risolve in `wmain`.  
  
 In alternativa, la dichiarazione delle funzioni `main` e `wmain` prevede la restituzione di `void` \(nessun valore restituito\).  Se la dichiarazione di `main` o `wmain` prevede la restituzione di `void`, non è possibile restituire un codice di uscita al processo padre o al sistema operativo utilizzando un'istruzione [return](../cpp/return-statement-in-program-termination-cpp.md).  Per restituire un codice di uscita quando `main` o `wmain` sono dichiarati come `void`, è necessario utilizzare la funzione [exit](../cpp/exit-function.md).  
  
## Fine sezione specifica Microsoft  
 I tipi per `argc` e `argv` sono definiti dal linguaggio.  I nomi `argc`, `argv` e `envp` sono tradizionali, ma non sono richiesti dal compilatore.  Per ulteriori informazioni e un esempio, vedere [Definizioni di argomenti](../cpp/argument-definitions.md).  
  
## Vedere anche  
 [Parole chiave C\+\+](../cpp/keywords-cpp.md)   
 [Utilizzo di wmain anziché di main](../cpp/using-wmain-instead-of-main.md)   
 [Limitazioni sulla funzione main](../cpp/main-function-restrictions.md)