---
title: "Suggerimenti generali sulla programmazione MBCS | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_mbcs"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "finestre di dialogo [C++], tipi di carattere"
  - "MBCS [C++], tipi di carattere in finestre di dialogo"
  - "MBCS [C++], programmazione"
  - "MS Shell Dlg"
ms.assetid: 7b541235-f3e5-4af0-b2c2-a0112cd5fbfb
caps.latest.revision: 9
caps.handback.revision: 9
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Suggerimenti generali sulla programmazione MBCS
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

Attenersi ai suggerimenti indicati di seguito.  
  
-   Per esigenze di flessibilità, utilizzare, quando possibile, le macro della libreria di runtime quali `_tcschr` e `_tcscpy`.  Per ulteriori informazioni, vedere [Mapping di testo generico in Tchar.h](../text/generic-text-mappings-in-tchar-h.md).  
  
-   Utilizzare la funzione della libreria di runtime del linguaggio C `_getmbcp` per ricevere informazioni sulla tabella codici corrente.  
  
-   Non riutilizzare le risorse di stringa.  A seconda della lingua di destinazione, una determinata stringa può avere, una volta tradotta, un diverso significato.  La parola "File" presente nel menu principale dell'applicazione, ad esempio, può essere tradotta in modo diverso dalla stringa "File" riportata in una finestra di dialogo.  Se si desidera utilizzare più stringhe con lo stesso nome, ricorrere a un diverso ID stringa per ciascuna di esse.  
  
-   È opportuno stabilire se si desidera che l'applicazione venga eseguita o meno in un sistema operativo abilitato per il formato MBCS.  A questo scopo, impostare un flag all'avvio del programma e non basarsi sulle chiamate all'API.  
  
-   Quando si progettano delle finestre di dialogo, lasciare circa il 30% di spazio vuoto alla fine dei controlli di testo statico per la traduzione in MBCS.  
  
-   Prestare attenzione quando si selezionano i tipi di carattere per l'applicazione, poiché alcuni tipi di carattere non sono disponibili in tutti i sistemi.  Nella versione giapponese di Windows 2000, ad esempio, il carattere Helvetica non è supportato.  
  
-   Al momento di selezionare il tipo di carattere per le finestre di dialogo, utilizzare [MS Shell Dlg](http://msdn.microsoft.com/library/windows/desktop/dd374112) invece di MS Sans Serif o Helvetica.  Il sistema sostituirà MS Shell Dlg con il tipo di carattere corretto prima di creare la finestra di dialogo.  L'utilizzo di MS Shell Dlg fa sì che qualsiasi modifica nel sistema operativo apportata per gestire questo tipo di carattere si renda automaticamente disponibile. MFC sostituisce MS Shell Dlg con DEFAULT\_GUI\_FONT o con il tipo di carattere di sistema in Windows 95, Windows 98 e Windows NT 4 poiché questi sistemi non gestiscono MS Shell Dlg correttamente.  
  
-   Quando si progetta l'applicazione, decidere quali stringhe sarà possibile localizzare.  In caso di incertezza, presumere che ogni stringa verrà localizzata.  Non combinare pertanto stringhe che possono essere localizzate con stringhe che non possono esserlo.  
  
## Vedere anche  
 [Suggerimenti sulla programmazione MBCS](../text/mbcs-programming-tips.md)   
 [Incremento e decremento dei puntatori](../text/incrementing-and-decrementing-pointers.md)