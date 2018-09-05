---
title: Creazione guidata Provider OLE DB ATL | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-atl
ms.topic: reference
f1_keywords:
- vc.codewiz.class.atl.provider.overview
dev_langs:
- C++
helpviewer_keywords:
- ATL OLE DB Provider Wizard
- ATL projects, adding ATL OLE DB providers
ms.assetid: cf91ba78-01d1-4d12-b673-e95d96bfbebe
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: a4bb77489a610d9331378e523b6983dcf14d996c
ms.sourcegitcommit: 92dbc4b9bf82fda96da80846c9cfcdba524035af
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 09/05/2018
ms.locfileid: "43762979"
---
# <a name="atl-ole-db-provider-wizard"></a>Creazione guidata provider OLE DB ATL

Questa procedura guidata vengono create le classi che compongono un provider OLE DB.

## <a name="remarks"></a>Note

A partire da Visual Studio 2008, lo script di registrazione prodotto da questa procedura guidata registrerà i componenti COM sotto **HKEY_CURRENT_USER** invece di **HKEY_LOCAL_MACHINE**. Per modificare questo comportamento, impostare il **Registra componente per tutti gli utenti** opzione della procedura guidata.

Nella tabella seguente vengono descritte le opzioni per la creazione guidata Provider OLE DB ATL:

**Nome breve**  
Digitare il nome breve del provider da creare. Le altre caselle di modifica della procedura guidata verranno popolato automaticamente in base al nome digitato. Se si desidera, è possibile modificare le altre caselle di nome.

**Coclasse**  
Il nome della coclasse. Il nome del ProgID verrà modificato in base a questo nome.

**Con attributi**  
Questa opzione specifica se la procedura guidata creerà le classi di provider usando gli attributi o le dichiarazioni di template. Quando si seleziona questa opzione, verranno utilizzati attributi invece delle dichiarazioni di modello (questo è l'opzione predefinita se si creasse un progetto con attributo). Quando si deseleziona questa opzione, la procedura guidata utilizza le dichiarazioni di template anziché agli attributi (questo è l'opzione predefinita se è stato creato un progetto senza attributi).

Se si seleziona questa opzione quando è stato creato un progetto senza attributi, la procedura guidata avvisa l'utente che il progetto verrà convertito in un progetto con attributi e chiede se si desidera continuare o meno.

**ProgID**  
Il ProgID, o identificatore a livello di codice, è una stringa di testo che l'applicazione può usare invece un GUID. Il nome del ProgID ha il formato *CoClassname*.

**Version**  
Il numero di versione del provider. Il valore predefinito è 1.

**Classe DataSource**  
Il nome della classe di origine dati, nel formato C*Shortname*origine.

**Origine dati file con estensione h**  
Il file di intestazione per la classe dell'origine dati. È possibile modificare questo nome file o selezionare un file di intestazione esistente.

**Classe di sessione**  
Il nome della classe di sessione, nel formato C*Shortname*sessione.

**File con estensione h di sessione**  
Il file di intestazione per la classe di sessione. È possibile modificare questo nome file o selezionare un file di intestazione esistente.

**Classe di comando**  
Il nome della classe di comando, nel formato C*Shortname*comando.

**File con estensione h di comando**  
Il file di intestazione per la classe di comando. Questo nome non può essere modificato e dipende dal nome del file di intestazione del set di righe.

**Classe di rowset**  
Il nome della classe di set di righe, nel formato C*Shortname*set di righe.

**File con estensione h di rowset**  
Il file di intestazione per la classe di set di righe. È possibile modificare questo nome file o selezionare un file di intestazione esistente.

**File con estensione cpp del set di righe**  
File di implementazione del provider. È possibile modificare questo nome file o selezionare un file di implementazione esistente.

## <a name="see-also"></a>Vedere anche

[Provider OLE DB ATL](../../atl/reference/adding-an-atl-ole-db-provider.md)

