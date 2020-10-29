---
title: Creazione guidata provider OLE DB ATL
ms.date: 05/09/2019
helpviewer_keywords:
- ATL projects, adding ATL OLE DB providers
ms.assetid: cf91ba78-01d1-4d12-b673-e95d96bfbebe
ms.openlocfilehash: 43b8ed4507b004f1e78bc1b9dda64c44ff56e1d7
ms.sourcegitcommit: 9c2b3df9b837879cd17932ae9f61cdd142078260
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/29/2020
ms.locfileid: "92921139"
---
# <a name="atl-ole-db-provider-wizard"></a>Creazione guidata provider OLE DB ATL

::: moniker range="msvc-160"

Questa procedura guidata non è disponibile in Visual Studio 2019 e versioni successive.

::: moniker-end

::: moniker range="<=msvc-150"

## <a name="remarks"></a>Osservazioni

A partire da Visual Studio 2008, lo script di registrazione prodotto da questa procedura guidata registra i componenti COM in **HKEY_CURRENT_USER** invece che in **HKEY_LOCAL_MACHINE** . Per modificare questo comportamento, impostare l'opzione **Registra componente per tutti gli utenti** della procedura guidata.

La tabella seguente descrive le opzioni per la Creazione guidata provider OLE DB ATL:

- **Nome breve**

   Digitare il nome breve del provider da creare. Le altre caselle di modifica della procedura guidata verranno completate automaticamente in base al nome digitato qui. È possibile modificare le altre caselle del nome se lo si desidera.

- **Coclasse**

   Nome della coclasse. Il nome di ProgID cambierà in modo da corrispondere a questo nome.

- **Con attributi**

   Questa opzione specifica se la procedura guidata creerà classi del provider tramite attributi o dichiarazioni di modello. Quando si seleziona questa opzione, la procedura guidata usa attributi invece di dichiarazioni di modello (impostazione predefinita se è stato creato un progetto con attributi). Quando si deseleziona questa opzione, la procedura guidata usa dichiarazioni di modello invece di attributi (impostazione predefinita se è stato creato un progetto senza attributi).

   Se si seleziona questa opzione quando è stato creato un progetto senza attributi, la procedura guidata avvisa che il progetto verrà convertito in un progetto con attributi e chiede se continuare o meno.

- **ProgID**

   Il ProgID o identificatore a livello di codice è una stringa di testo che l'applicazione può usare al posto di un GUID. Il nome di ProgID ha il formato *Nomeprogetto.Nomecoclasse* .

- **Versione**

   Numero di versione del provider. Il valore predefinito è 1.

- **Classe DataSource**

   Nome della classe di origine dati, nel formato C *Nomebreve* Source.

- **File H di origine dati**

   File di intestazione per la classe di origine dati. È possibile modificare il nome di questo file o selezionare un file di intestazione esistente.

- **Session class** (Classe di sessione)

   Nome della classe di sessione, nel formato C *Nomebreve* Session.

- **File H di sessione**

   File di intestazione per la classe di sessione. È possibile modificare il nome di questo file o selezionare un file di intestazione esistente.

- **Command class** (Classe di comando)

   Nome della classe di comando, nel formato C *Nomebreve* Command.

- **File H di comando**

   File di intestazione per la classe di comando. Questo nome non può essere modificato e dipende dal nome del file di intestazione del set di righe.

- **Rowset class** (Classe di set di righe)

   Nome della classe di set di righe, nel formato C *Nomebreve* Rowset.

- **File H di rowset**

   File di intestazione per la classe di set di righe. È possibile modificare il nome di questo file o selezionare un file di intestazione esistente.

- **File CPP di rowset**

   File di implementazione del provider. È possibile modificare il nome di questo file o selezionare un file di implementazione esistente.

::: moniker-end

## <a name="see-also"></a>Vedere anche

[Provider OLE DB ATL](../../atl/reference/adding-an-atl-ole-db-provider.md)
