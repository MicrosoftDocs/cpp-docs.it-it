---
title: "CStdioFile Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CStdioFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CStdioFile class"
  - "I/O [MFC], stream"
  - "stream I/O"
ms.assetid: 88c2274c-4f0e-4327-882a-557ba4b3ae15
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 24
---
# CStdioFile Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Rappresenta il file di runtime del flusso C\/C\+\+ come aperto dalla funzione di runtime [fopen](../../c-runtime-library/reference/fopen-wfopen.md).  
  
## Sintassi  
  
```  
class CStdioFile : public CFile  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStdioFile::CStdioFile](../Topic/CStdioFile::CStdioFile.md)|Costruisce un oggetto `CStdioFile` da un percorso o un puntatore del file.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStdioFile::Open](../Topic/CStdioFile::Open.md)|Di overload.  Il è progettato per l'utilizzo con il costruttore predefinito `CStdioFile` \(override [CFile::Open](../Topic/CFile::Open.md)\).|  
|[CStdioFile::ReadString](../Topic/CStdioFile::ReadString.md)|Legge una riga di testo.|  
|[CStdioFile::Seek](../Topic/CStdioFile::Seek.md)|Posizionare il puntatore del file corrente.|  
|[CStdioFile::WriteString](../Topic/CStdioFile::WriteString.md)|Scrivere una sola riga di testo.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CStdioFile::m\_pStream](../Topic/CStdioFile::m_pStream.md)|Contiene un puntatore a un file aperto.|  
  
## Note  
 I file del flusso vengono memorizzati nel buffer e possono essere aperti in modalità testo \(impostazione predefinita\) o in modalità binaria.  
  
 La modalità di testo fornisce l'elaborazione speciale per le coppie di ritorno a capo\-avanzamento righe.  Quando si scrive un carattere di nuova riga \(0x0A a un oggetto `CStdioFile` di " text\-mode ", la coppia di byte \(0x0D, 0x0A\) al file.  Durante la lettura, la coppia di byte \(0x0D, 0x0A\) viene convertita in un singolo byte 0x0A.  
  
 [file C](../../mfc/reference/cfile-class.md) viene eseguito [duplicato](../Topic/CFile::Duplicate.md), [LockRange](../Topic/CFile::LockRange.md)e [UnlockRange](../Topic/CFile::UnlockRange.md) non è supportato per `CStdioFile`.  
  
 Se queste funzioni vengono chiamate in `CStdioFile`, si otterrà [CNotSupportedException](../../mfc/reference/cnotsupportedexception-class.md).  
  
 Per ulteriori informazioni su l `CStdioFile`, vedere gli articoli [file in MFC](../../mfc/files-in-mfc.md) e [Gestione dei file](../../c-runtime-library/file-handling.md)*in riferimenti alla libreria di runtime*.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [File C](../../mfc/reference/cfile-class.md)  
  
 `CStdioFile`  
  
## Requisiti  
 **Header:** afx.h  
  
## Vedere anche  
 [CFile Class](../../mfc/reference/cfile-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CFile Class](../../mfc/reference/cfile-class.md)   
 [CFile::Duplicate](../Topic/CFile::Duplicate.md)   
 [CFile::LockRange](../Topic/CFile::LockRange.md)   
 [CFile::UnlockRange](../Topic/CFile::UnlockRange.md)   
 [CNotSupportedException Class](../../mfc/reference/cnotsupportedexception-class.md)   
 [Ricerca di categorie: Utilizzare la classe del file C?](http://go.microsoft.com/fwlink/?LinkId=128046)