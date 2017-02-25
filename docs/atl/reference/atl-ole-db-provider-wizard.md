---
title: "Creazione guidata provider OLE DB ATL | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "vc.codewiz.class.atl.provider.overview"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Creazione guidata provider OLE DB ATL"
  - "Progetti ATL, aggiunta di provider OLE DB ATL"
ms.assetid: cf91ba78-01d1-4d12-b673-e95d96bfbebe
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 13
---
# Creazione guidata provider OLE DB ATL
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

È possibile utilizzare questa procedura guidata per creare le classi che compongono un provider OLE DB.  
  
## Note  
 A partire da [!INCLUDE[vs_orcas_long](../../atl/reference/includes/vs_orcas_long_md.md)], lo script della registrazione prodotto da questa procedura guidata registrerà i componenti COM in **HKEY\_CURRENT\_USER** invece di **HKEY\_LOCAL\_MACHINE**.  Per modificare questo comportamento, impostare l'opzione **Registra componente per tutti gli utenti** della procedura guidata ATL.  
  
 Nella tabella seguente sono descritte le opzioni per la procedura guidata del provider ATL OLE DB:  
  
 **Nome breve**  
 Digitare il nome breve del provider da creare.  Le altre caselle di testo della procedura guidata verranno automaticamente compilate con il nome immesso.  Se lo si desidera, è possibile modificare tali nomi.  
  
 **Coclasse**  
 Nome della coclasse.  Il nome del ProgID verrà modificato in modo che corrisponda a questo nome.  
  
 **Con attributi**  
 È possibile utilizzare questa opzione per specificare se verranno create classi del provider mediante gli attributi o le dichiarazioni di template.  Se l'opzione è selezionata, verranno utilizzati gli attributi invece delle dichiarazioni di template. Questa è l'impostazione predefinita per i progetti creati con attributi.  Se l'opzione viene cancellata, verranno utilizzate le dichiarazioni di template invece degli attributi. Questa è l'impostazione predefinita per i progetti creati senza attributi.  
  
 Se si seleziona questa opzione per un progetto senza attributi, verrà visualizzato un messaggio di avviso per informare che il progetto verrà convertito in un progetto con attributi e verrà chiesto se si desidera continuare.  
  
 **ProgID**  
 Il ProgID, o identificatore a livello di codice, è una stringa di testo che può essere utilizzata dall'applicazione invece di un GUID.  Il nome del ProgID ha il formato *Nomeprogetto*.*Nomecoclasse*.  
  
 **Versione**  
 Il numero di versione del provider.  Il valore predefinito è 1.  
  
 **Classe di origine dati**  
 Nome della classe di origine dati con il formato C`Shortname`Source.  
  
 **File .h di origine dati**  
 Il file di intestazione per la classe di origine dati.  È possibile modificare questo nome file o selezionare un file di intestazione esistente.  
  
 **Classe di sessione**  
 Nome della classe di sessione con il formato C`Shortname`Session.  
  
 **File .h di sessione**  
 Il file di intestazione per la classe di sessione.  È possibile modificare questo nome file o selezionare un file di intestazione esistente.  
  
 **Classe di comando**  
 Nome della classe di comando con il formato C`Shortname`Command.  
  
 **File .h di comando**  
 Il file di intestazione per la classe di comando.  Questo nome non può essere modificato e dipende dal nome del file di intestazione rowset.  
  
 **Classe di rowset**  
 Nome della classe di rowset con il formato C`Shortname`Rowset.  
  
 **File .h di rowset**  
 Il file di intestazione per la classe di rowset.  È possibile modificare questo nome file o selezionare un file di intestazione esistente.  
  
 **File .cpp di rowset**  
 Il file di implementazione del provider.  È possibile modificare questo nome file o selezionare un file di implementazione esistente.  
  
## Vedere anche  
 [ATL OLE DB Provider](../../atl/reference/adding-an-atl-ole-db-provider.md)