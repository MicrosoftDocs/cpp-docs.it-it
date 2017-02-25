---
title: "CString Argument Passing | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "argument passing [C++]"
  - "argument passing [C++], C strings"
  - "arguments [C++], passaggio"
  - "CString objects, passaggio di argomenti"
  - "funzioni [C++], strings as input/output"
  - "passaggio di argomenti, C strings"
  - "string arguments"
  - "stringhe [C++], as function input/output"
ms.assetid: a67bebff-edf1-4cf4-bbff-d1cc6a901099
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 9
---
# CString Argument Passing
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

In questo articolo viene illustrato come passare oggetti [CString](../atl-mfc-shared/reference/cstringt-class.md) a funzioni e come restituire oggetti `CString` dalle funzioni.  
  
##  <a name="_core_cstring_argument.2d.passing_conventions"></a> Convenzioni diPassaggio di CString  
 Quando si definisce l'interfaccia della classe, è necessario determinare la convenzione di passaggio per le funzioni membro.  Esistono alcune regole standard per passare e restituire oggetti `CString`.  Se si seguono le regole riportate in [stringhe come input di funzione](#_core_strings_as_function_inputs) e in [stringhe come output di funzione](#_core_strings_as_function_outputs), saranno codice efficiente e corretto.  
  
##  <a name="_core_strings_as_function_inputs"></a> Stringhe come input di funzione  
 Il modo più efficiente e sicura utilizzare un oggetto `CString` nelle funzioni chiamate è passare un oggetto `CString` alla funzione.  Nonostante il nome, un oggetto `CString` non memorizza una stringa internamente come stringa di tipo c con un carattere di terminazione null.  Al contrario, un oggetto `CString` tiene la barra di avanzamento attenzione al numero di caratteri con.  Grazie `CString` fornire un puntatore `LPCTSTR` a una stringa con terminazione null è una piccola quantità di lavoro che può diventare significativo se il codice deve farlo costantemente.  Il risultato è temporaneo poiché ogni modifica apportata ai contenuti `CString` invalida le copie recenti del puntatore `LPCTSTR`.  
  
 È opportuno fornire in alcuni casi a\-c stringa stile.  Ad esempio, potrebbe contenere una situazione in cui una funzione chiamata viene scritta in C e non supporta gli oggetti.  In questo caso, assegnare il parametro `CString` a `LPCTSTR`e la funzione otterrà a c la stringa con terminazione null stile.  È anche possibile passare altra direzione e creare un oggetto `CString` utilizzando il costruttore `CString` che accetta il parametro di stringa di tipo c.  
  
 Se il contenuto della stringa devono essere modificati da una funzione, dichiarare il parametro come riferimento non costante `CString` \(**CString&**\).  
  
##  <a name="_core_strings_as_function_outputs"></a> Stringhe come output di funzione  
 In genere è possibile restituire oggetti `CString` da funzioni perché gli oggetti `CString` alla semantica di valore come tipi primitivi.  Per restituire una stringa di sola lettura, utilizzare un riferimento costante `CString` \(**const CString&**\).  Nell'esempio seguente viene illustrato l'utilizzo di parametri e i tipi restituiti `CString` :  
  
 [!code-cpp[NVC_ATLMFC_Utilities#197](../atl-mfc-shared/codesnippet/CPP/cstring-argument-passing_1.cpp)]  
  
 [!code-cpp[NVC_ATLMFC_Utilities#198](../atl-mfc-shared/codesnippet/CPP/cstring-argument-passing_2.cpp)]  
  
## Vedere anche  
 [Stringhe](../atl-mfc-shared/strings-atl-mfc.md)