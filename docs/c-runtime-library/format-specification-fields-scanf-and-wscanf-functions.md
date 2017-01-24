---
title: "Campi per la specifica di formato: funzioni scanf e wscanf | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
apilocation: 
  - "msvcr80.dll"
  - "msvcr110.dll"
  - "msvcr90.dll"
  - "msvcr100.dll"
  - "msvcr110_clr0400.dll"
  - "msvcr120.dll"
apitype: "DLLExport"
f1_keywords: 
  - "wscanf"
  - "scanf"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "larghezza, specifiche nella funzione scanf"
  - "specifica di formato per scanf"
  - "specifiche della larghezza per scanf"
  - "caratteri di campo di tipo per scanf"
  - "campi di tipo, funzione scanf"
  - "campi per la specifica di formato per la funzione scanf"
  - "campi di tipo"
ms.assetid: 7e95de1b-0b71-4de3-9f81-c9560c78e039
caps.latest.revision: 14
caps.handback.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Campi per la specifica di formato: funzioni scanf e wscanf
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Le informazioni riportate si applicano all'intera famiglia di funzioni `scanf`, incluse le versioni sicure e descrivono i simboli utilizzati per comunicare alle funzioni `scanf` come analizzare il flusso di input, come il flusso di input `stdin` per `scanf`, in valori che vengono inseriti nelle variabili del programma.  
  
 Una specifica di formato presenta la forma seguente:  
  
 `%`\[`*`\] \[[larghezza](../c-runtime-library/scanf-width-specification.md)\] \[{[h &#124; l &#124; ll &#124; I64 &#124; L](../c-runtime-library/scanf-width-specification.md)}\][tipo](../c-runtime-library/scanf-type-field-characters.md)  
  
 L'argomento `format` specifica l'interpretazione dell'input e può contenere uno o più dei seguenti:  
  
-   Caratteri di spazio vuoti: vuoto \(' '\); tabulazione \('\\t'\); nuova riga \('\\n'\).  Un carattere di spazio vuoto comporta che `scanf` legga, ma non memorizzi, tutti i caratteri di spazio vuoti consecutivi nell'input fino al prossimo carattere di spazio non vuoto.  Un carattere di spazio vuoto nel formato corrisponde a qualsiasi numero \(0 incluso\) e combinazione di caratteri di spazio vuoto nell'input.  
  
-   Caratteri di spazio non vuoti, ad eccezione del segno di percentuale \(`%`\).  Un carattere spazio non vuoto comporta che `scanf` legga , ma non memorizzi, un carattere di spazio non vuoto corrispondente.  Se il carattere successivo nel flusso di input non corrisponde, `scanf` termina.  
  
-   Specifiche di formato, introdotte dal segno di percentuale \(`%`\).  Una specifica di formato fa sì che `scanf` legga e converta i caratteri nell'input in valori di un tipo specificato.  Il valore viene assegnato ad un argomento nell'elenco degli argomenti.  
  
 Il formato viene letto da sinistra verso destra.  Ci si aspetta che caratteri al di fuori delle specifiche di formato corrispondano alla sequenza di caratteri nel flusso di input; i caratteri corrispondenti nel flusso di input vengono analizzati ma non memorizzati.  Se un carattere nel flusso di input è in conflitto con la specifica del formato, `scanf` termina e il carattere viene lasciato nel flusso di input come se non fosse stato letto.  
  
 Quando viene trovata la prima specifica di formato, il valore del primo campo di input viene convertito in base alla specifica e viene archiviato nella posizione specificata dal primo `argument`.  La seconda specifica di formato fa sì che il secondo campo di input venga convertito e a memorizzato nel secondo `argument`, e così via fino al termine della stringa di formato.  
  
 Un campo di input viene definito o come tutti i caratteri fino al primo carattere di spazio vuoto \(spazio, tabulazione, o nuova riga\), o finché il primo carattere che non può essere convertito in base alla specifica di formato, oppure fino a quando non venga raggiunta la larghezza del campo \(se specificata\).  Se sono presenti troppi argomenti per le specifiche date, gli argomenti aggiuntivi vengono valutati ma ignorati.  I risultati non sono prevedibili se non vi sono argomenti sufficienti per le specifiche di formato.  
  
 Ogni campo della specifica di formato è un unico carattere o un numero che denota un'opzione di formattazione specifica.  Il carattere `type`, visualizzato dopo l'ultimo campo facoltativo di formato, determina se il campo di input viene interpretato come un carattere, una stringa, o numero.  
  
 La specifica di formato più semplice contiene solo il segno di percentuale e un carattere `type` \(ad esempio, `%s`\).  Se un segno di percentuale \(`%`\) è seguito da un carattere, esso non ha significato di carattere di controllo di formato, tale carattere e i caratteri seguenti \(fino al carattere di percentuale successivo\) vengono considerati come sequenza comune di caratteri, ovvero, una sequenza di caratteri che deve corrispondere all'input.  Ad esempio, per specificare che un carattere di percentuale deve essere di input, utilizzare `%%`.  
  
 Un asterisco \(`*`\) che segue il segno di percentuale elimina l'assegnazione del campo di input successivo, il quale viene interpretato come un campo del tipo specificato.  Il campo viene scansionato ma non salvato.  
  
 Le versioni sicure \(quelle con il suffisso `_s`\) della famiglia di funzioni `scanf` richiedono che venga passato un parametro di dimensione del buffer immediatamente dopo ciascun parametro di tipo successiva a ogni parametro di tipo `c`, `C`, `s`, `S` o `[`.  Per ulteriori informazioni sulle versioni sicure della famiglia di funzioni `scanf`, vedere [scanf\_s, \_scanf\_s\_l, wscanf\_s, \_wscanf\_s\_l](../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md).  
  
## Vedere anche  
 [Specifica della larghezza per scanf](../c-runtime-library/scanf-width-specification.md)   
 [Caratteri di campo di tipo per scanf](../c-runtime-library/scanf-type-field-characters.md)   
 [scanf, \_scanf\_l, wscanf, \_wscanf\_l](../c-runtime-library/reference/scanf-scanf-l-wscanf-wscanf-l.md)   
 [scanf\_s, \_scanf\_s\_l, wscanf\_s, \_wscanf\_s\_l](../c-runtime-library/reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)