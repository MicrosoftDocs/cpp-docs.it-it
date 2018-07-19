---
title: Creazione di un Provider aggiornabile | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- OLE DB providers, updatable
- notifications, support in providers
- OLE DB providers, creating
ms.assetid: bdfd5c9f-1c6f-4098-822c-dd650e70ab82
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: cbcd69168b70e8d85bf2b90c3f456f79cd1c228c
ms.sourcegitcommit: 3614b52b28c24f70d90b20d781d548ef74ef7082
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/11/2018
ms.locfileid: "38954584"
---
# <a name="creating-an-updatable-provider"></a>Creazione di un provider aggiornabile

Visual C++ supporta i provider in grado di aggiornare o provider aggiornabili (scrivere) nell'archivio dati. In questo argomento illustra come creare provider aggiornabile usando i modelli OLE DB.  
  
 Questo argomento si presuppone che si inizi con un provider utilizzabile. Esistono due passaggi per la creazione di un provider aggiornabile. È prima necessario decidere come il provider verrà apportate modifiche all'archivio dati; in particolare, se le modifiche devono essere eseguite immediatamente o posticipata fino a quando non viene eseguito un comando update. La sezione "[rendendo provider aggiornabili](#vchowmakingprovidersupdatable)" descrive le modifiche e le impostazioni necessarie nel codice del provider.  
  
 Successivamente, è necessario assicurarsi che di provider contiene tutte le funzionalità necessarie per supportare che il consumer può richiedere di esso. Se l'utente vuole aggiornare l'archivio dati, il provider deve contenere codice che rende persistenti i dati nell'archivio dati. Ad esempio, si potrebbe usare la libreria Run-Time di C o MFC per eseguire queste operazioni nell'origine dati. La sezione "[scrittura all'origine dati](#vchowwritingtothedatasource)" viene descritto come scrivere nell'origine dati, affrontare `NULL` e i valori predefiniti e impostare i flag di colonna.  
  
> [!NOTE]
>  UpdatePV è un esempio di un provider aggiornabile. UpdatePV è uguale a MyProv, ma con il supporto aggiornabile.  
  
##  <a name="vchowmakingprovidersupdatable"></a> Provider di rendere aggiornabili  

 La chiave per prendere un provider aggiornabile è comprendere le operazioni che si desidera che il provider per eseguire l'archivio dati e come si desidera che il provider per eseguire tali operazioni. In particolare, il problema principale è che gli aggiornamenti nell'archivio dati sono per essere eseguita immediatamente o posticipata (batch) fino a quando non viene eseguito un comando update.  
  
 È prima necessario decidere se si desidera ereditare `IRowsetChangeImpl` o `IRowsetUpdateImpl` nella classe del set di righe. A seconda di quale di questi si sceglie di implementare, saranno interessate le funzionalità dei tre metodi: `SetData`, `InsertRows`, e `DeleteRows`.  
  
- Se si eredita da [IRowsetChangeImpl](../../data/oledb/irowsetchangeimpl-class.md), chiamando questi tre metodi modificato immediatamente l'archivio dati.  
  
- Se si eredita da [IRowsetUpdateImpl](../../data/oledb/irowsetupdateimpl-class.md), i metodi di rinviare le modifiche all'archivio dati finché non si chiama `Update`, `GetOriginalData`, o `Undo`. Se l'aggiornamento implica molte modifiche, vengono eseguiti in modalità batch (si noti che l'invio in batch delle modifiche può aggiungere overhead notevole della memoria).  
  
 Si noti che `IRowsetUpdateImpl` deriva da `IRowsetChangeImpl`. Di conseguenza, `IRowsetUpdateImpl` offre solo modifica funzionalità oltre a funzionalità di batch.  
  
#### <a name="to-support-updatability-in-your-provider"></a>Per supportare aggiornabilità nel provider  
  
1. Nella classe del set di righe, ereditare `IRowsetChangeImpl` o `IRowsetUpdateImpl`. Queste classi forniscono interfacce appropriate per modificare l'archivio dati:  
  
     **Aggiunta di IRowsetChange**  
  
     Aggiungere `IRowsetChangeImpl` alla catena di ereditarietà usando questo formato:  
  
    ```  
    IRowsetChangeImpl< rowset-name, storage-name >  
    ```  
  
     Aggiungere inoltre `COM_INTERFACE_ENTRY(IRowsetChange)` per il `BEGIN_COM_MAP` sezione nella classe del set di righe.  
  
     **Aggiunta di IRowsetUpdate**  
  
     Aggiungere `IRowsetUpdate` alla catena di ereditarietà usando questo formato:  
  
    ```  
    IRowsetUpdateImpl< rowset-name, storage>  
    ```  
  
    > [!NOTE]
    >  È necessario rimuovere il `IRowsetChangeImpl` riga dalla catena di ereditarietà. Questa eccezione per la direttiva menzionata in precedenza deve includere il codice per `IRowsetChangeImpl`.  
  
2.  Aggiungere il codice seguente alla mappa COM (`BEGIN_COM_MAP ... END_COM_MAP`):  
  
    |Se si implementa|Aggiungere alla mappa COM|  
    |----------------------|--------------------|  
    |`IRowsetChangeImpl`|`COM_INTERFACE_ENTRY(IRowsetChange)`|  
    |`IRowsetUpdateImpl`|`COM_INTERFACE_ENTRY(IRowsetChange)COM_INTERFACE_ENTRY(IRowsetUpdate)`|  
  
3.  Nel comando, aggiungere il codice seguente alla mappa del set di proprietà (`BEGIN_PROPSET_MAP ... END_PROPSET_MAP`):  
  
    |Se si implementa|Aggiungere alla mappa proprietà|  
    |----------------------|-----------------------------|  
    |`IRowsetChangeImpl`|`PROPERTY_INFO_ENTRY_VALUE(IRowsetChange, VARIANT_FALSE)`|  
    |`IRowsetUpdateImpl`|`PROPERTY_INFO_ENTRY_VALUE(IRowsetChange, VARIANT_FALSE)PROPERTY_INFO_ENTRY_VALUE(IRowsetUpdate, VARIANT_FALSE)`|  
  
4.  Nel mapping dei set di proprietà, è necessario anche includere tutte le impostazioni seguenti riportati di seguito:  
  
    ```  
    PROPERTY_INFO_ENTRY_VALUE(UPDATABILITY, DBPROPVAL_UP_CHANGE |   
      DBPROPVAL_UP_INSERT | DBPROPVAL_UP_DELETE)  
    PROPERTY_INFO_ENTRY_VALUE(CHANGEINSERTEDROWS, VARIANT_TRUE)  
    PROPERTY_INFO_ENTRY_VALUE(IMMOBILEROWS, VARIANT_TRUE)  
  
    PROPERTY_INFO_ENTRY_EX(OWNINSERT, VT_BOOL, DBPROPFLAGS_ROWSET |   
      DBPROPFLAGS_READ, VARIANT_TRUE, 0)  
    PROPERTY_INFO_ENTRY_EX(OWNUPDATEDELETE, VT_BOOL, DBPROPFLAGS_ROWSET |   
      DBPROPFLAGS_READ, VARIANT_TRUE, 0)  
    PROPERTY_INFO_ENTRY_EX(OTHERINSERT, VT_BOOL, DBPROPFLAGS_ROWSET |   
      DBPROPFLAGS_READ, VARIANT_TRUE, 0)  
    PROPERTY_INFO_ENTRY_EX(OTHERUPDATEDELETE, VT_BOOL, DBPROPFLAGS_ROWSET |   
      DBPROPFLAGS_READ, VARIANT_TRUE, 0)  
    PROPERTY_INFO_ENTRY_EX(REMOVEDELETED, VT_BOOL, DBPROPFLAGS_ROWSET |   
      DBPROPFLAGS_READ, VARIANT_FALSE, 0)  
    ```  
  
     È possibile trovare i valori usati in queste chiamate della macro esaminando in Atldb. h per l'ID di proprietà e i valori (se Atldb. h è diverso dalla documentazione online, Atldb. h sostituisce la documentazione).  
  
    > [!NOTE]
    >  Numero dei `VARIANT_FALSE` e `VARIANT_TRUE` impostazioni sono necessarie per i modelli OLE DB; indica che la specifica OLE DB possono essere di lettura/scrittura, ma i modelli OLE DB possono supportare solo un valore.  
  
     **Se si implementa IRowsetChangeImpl**  
  
     Se si implementa `IRowsetChangeImpl`, è necessario impostare le proprietà seguenti per il provider. Queste proprietà vengono utilizzate principalmente per richiedere interfacce tramite `ICommandProperties::SetProperties`.  
  
    - `DBPROP_IRowsetChange`: Verrà impostata automaticamente `DBPROP_IRowsetChange`.  
  
    - `DBPROP_UPDATABILITY`: Una maschera di bit che specifica i metodi supportati in `IRowsetChange`: `SetData`, `DeleteRows`, o `InsertRow`.  
  
    - `DBPROP_CHANGEINSERTEDROWS`: Il consumer può chiamare `IRowsetChange::DeleteRows` o `SetData` per le righe appena inserite.  
  
    - `DBPROP_IMMOBILEROWS`: Set di righe non verranno riordinate righe inserite o aggiornate.  
  
     **Se si implementa IRowsetUpdateImpl**  
  
     Se si implementa `IRowsetUpdateImpl`, è necessario impostare anche le proprietà seguenti per il provider a tutte le proprietà per `IRowsetChangeImpl` elencate in precedenza:  
  
    - `DBPROP_IRowsetUpdate`.  
  
    - `DBPROP_OWNINSERT`: Deve essere VARIANT_TRUE e READ_ONLY.  
  
    - `DBPROP_OWNUPDATEDELETE`: Deve essere VARIANT_TRUE e READ_ONLY.  
  
    - `DBPROP_OTHERINSERT`: Deve essere VARIANT_TRUE e READ_ONLY.  
  
    - `DBPROP_OTHERUPDATEDELETE`: Deve essere VARIANT_TRUE e READ_ONLY.  
  
    - `DBPROP_REMOVEDELETED`: Deve essere VARIANT_TRUE e READ_ONLY.  
  
    - `DBPROP_MAXPENDINGROWS`.  
  
        > [!NOTE]
        >  Se si supportano le notifiche, potrebbe essere anche altre proprietà non corretta. vedere la sezione sulla `IRowsetNotifyCP` per questo elenco.  
  
##  <a name="vchowwritingtothedatasource"></a> La scrittura all'origine dati  
 Per leggere dall'origine dati, chiamare il `Execute` (funzione). Per scrivere nell'origine dati, chiamare il `FlushData` (funzione). (In senso generale, scaricamento mezzi per salvare le modifiche apportate a una tabella o indice su disco).  

