---
title: "Utilizzo degli operatori CArchive &lt;&lt; e &gt;&gt; | Microsoft Docs"
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
  - "CArchive"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CArchive (classe), operatori"
  - "CArchive (classe), memorizzazione e caricamento di oggetti"
  - "oggetti [C++], caricamento di valori precedentemente memorizzati"
ms.assetid: 56aef326-02dc-4992-8282-f0a4b78a064e
caps.latest.revision: 10
caps.handback.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Utilizzo degli operatori CArchive &lt;&lt; e &gt;&gt;
[!INCLUDE[vs2017banner](../assembler/inline/includes/vs2017banner.md)]

`CArchive` fornisce \<\< e \>\> operatori per la scrittura e la lettura dei tipi di dati semplici nonché `CObject`s da un file.  
  
#### Per memorizzare un oggetto in un file tramite un archivio  
  
1.  Nell'esempio seguente viene illustrato come memorizzare un oggetto in un file tramite un archivio:  
  
     [!code-cpp[NVC_MFCSerialization#7](../mfc/codesnippet/CPP/using-the-carchive-output-and-input-operators_1.cpp)]  
  
#### Per caricare un oggetto da un valore precedentemente memorizzato in un file  
  
1.  Nell'esempio seguente viene illustrato come caricare un oggetto da un valore precedentemente memorizzato in un file:  
  
     [!code-cpp[NVC_MFCSerialization#8](../mfc/codesnippet/CPP/using-the-carchive-output-and-input-operators_2.cpp)]  
  
 In genere, viene memorizzato e caricare i dati da un file tramite un archivio nelle funzioni di `CObject`\- classi derivate di `Serialize`, è necessario dichiarare con la macro di **DECLARE\_SERIALIZE**.  Un riferimento a un oggetto di `CArchive` viene passato alla funzione di `Serialize`.  Chiama la funzione di `IsLoading` dell'oggetto di `CArchive` per determinare se la funzione di `Serialize` è stata chiamata per caricare i dati dal file o da archiviare dati nel file.  
  
 La funzione di `Serialize` di `CObject`serializzabile \- classe derivata in genere presenta il formato seguente:  
  
 [!code-cpp[NVC_MFCSerialization#9](../mfc/codesnippet/CPP/using-the-carchive-output-and-input-operators_3.cpp)]  
  
 Il modello di sopra di codice è esattamente a quello di un AppWizard per creare la funzione di `Serialize` del documento \(classe derivata da **CDocument\)**.  Questo modello di codice consente di scrivere codice che è più facile rivedere, poiché il codice archiviando e il codice di caricamento devono essere sempre paralleli, come nel seguente esempio:  
  
 [!code-cpp[NVC_MFCSerialization#10](../mfc/codesnippet/CPP/using-the-carchive-output-and-input-operators_4.cpp)]  
  
 La libreria definisce **\<\<** e gli operatori di **\>\>** per `CArchive` come primo operando e i seguenti tipi di dati e tipi di classe come secondo operando:  
  
||||  
|-|-|-|  
|`CObject*`|**DIMENSIONE e CSize**|**float**|  
|**WORD**|`CString`|**PUNTO** e `CPoint`|  
|`DWORD`|**BYTE**|`RECT` e `CRect`|  
|**Double**|**LONG**|`CTime` e `CTimeSpan`|  
|`Int`|**COleCurrency**|`COleVariant`|  
|`COleDateTime`|`COleDateTimeSpan`||  
  
> [!NOTE]
>  Archiviare e `CObject`caricare o tramite un archivio richiedono una considerazione aggiuntiva.  Per ulteriori informazioni, vedere [CObjects archiviando e di carico tramite un archivio](../mfc/storing-and-loading-cobjects-via-an-archive.md).  
  
 Gli operatori di **\>\>** e di **CArchive \<\<** restituiscono sempre un riferimento all'oggetto di `CArchive`, che è il primo operando.  Ciò consente di concatenare operatori, come illustrato di seguito:  
  
 [!code-cpp[NVC_MFCSerialization#11](../mfc/codesnippet/CPP/using-the-carchive-output-and-input-operators_5.cpp)]  
  
## Vedere anche  
 [Serializzazione: serializzazione di un oggetto](../mfc/serialization-serializing-an-object.md)