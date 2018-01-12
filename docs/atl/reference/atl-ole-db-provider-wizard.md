---
title: Creazione guidata Provider OLE DB ATL | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology: cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords: vc.codewiz.class.atl.provider.overview
dev_langs: C++
helpviewer_keywords:
- ATL OLE DB Provider Wizard
- ATL projects, adding ATL OLE DB providers
ms.assetid: cf91ba78-01d1-4d12-b673-e95d96bfbebe
caps.latest.revision: "13"
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload: cplusplus
ms.openlocfilehash: 660f70be8ec4ac1efcec056c694d0e2fc3256071
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="atl-ole-db-provider-wizard"></a>Creazione guidata provider OLE DB ATL
Questa procedura guidata crea le classi che compongono un provider OLE DB.  
  
## <a name="remarks"></a>Note  
 A partire da Visual Studio 2008, lo script di registrazione prodotto da questa procedura guidata registrerà i componenti COM in **HKEY_CURRENT_USER** anziché **HKEY_LOCAL_MACHINE**. Per modificare questo comportamento, impostare il **Registra componente per tutti gli utenti** opzione della procedura guidata ATL.  
  
 Nella tabella seguente vengono descritte le opzioni per la creazione guidata Provider OLE DB ATL:  
  
 **Nome breve**  
 Digitare il nome breve del provider da creare. Le altre caselle di modifica della procedura guidata verranno inseriti automaticamente in base a quanto digitato. Se si desidera, è possibile modificare le altre caselle di nome.  
  
 **Coclasse**  
 Il nome della coclasse. Il nome del ProgID verrà modificato in base a questo nome.  
  
 **Con attributi**  
 Questa opzione specifica se la procedura guidata creerà le classi provider usando gli attributi o le dichiarazioni di template. Quando si seleziona questa opzione, la procedura guidata utilizza gli attributi anziché le dichiarazioni di template (si tratta dell'opzione predefinita se è stato creato un progetto con attributi). Quando si deseleziona questa opzione, verranno usate dichiarazioni di modello anziché agli attributi (si tratta dell'opzione predefinita se è stato creato un progetto con attributi).  
  
 Se si seleziona questa opzione quando si crea un progetto con attributi, la procedura guidata avvisa l'utente che il progetto verrà convertito in un progetto con attributi e viene richiesto se continuare o meno.  
  
 **ProgID**  
 Il ProgID o identificatore a livello di codice, è una stringa di testo che l'applicazione può utilizzare invece un GUID. Il nome del ProgID ha il formato *CoClassname*.  
  
 **Version**  
 Il numero di versione del provider. Il valore predefinito è 1.  
  
 **Classe di origine dati**  
 Il nome della classe di origine dati, nel formato C*Shortname*origine.  
  
 **File di origine dati. h**  
 Il file di intestazione per la classe di origine dati. È possibile modificare questo nome file o selezionare un file di intestazione esistente.  
  
 **Classe di sessione**  
 Il nome della classe di sessione, nel formato C*Shortname*sessione.  
  
 **File di sessione. h**  
 Il file di intestazione per la classe di sessione. È possibile modificare questo nome file o selezionare un file di intestazione esistente.  
  
 **Classe di comando**  
 Il nome della classe di comando, nel formato C*Shortname*comando.  
  
 **File di comando. h**  
 Il file di intestazione per la classe di comando. Questo nome non può essere modificato e dipende dal nome del file di intestazione rowset.  
  
 **Classe di rowset**  
 Il nome della classe di rowset, nel formato C*Shortname*set di righe.  
  
 **File di set di righe. h**  
 Il file di intestazione per la classe di rowset. È possibile modificare questo nome file o selezionare un file di intestazione esistente.  
  
 **File con estensione cpp set di righe**  
 File di implementazione del provider. È possibile modificare questo nome file o selezionare un file di implementazione esistente.  
  
## <a name="see-also"></a>Vedere anche  
 [Provider OLE DB ATL](../../atl/reference/adding-an-atl-ole-db-provider.md)

