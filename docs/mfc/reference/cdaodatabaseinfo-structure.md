---
title: Struttura CDaoDatabaseInfo
ms.date: 11/04/2016
f1_keywords:
- CDaoDatabaseInfo
helpviewer_keywords:
- CDaoDatabaseInfo structure [MFC]
- DAO (Data Access Objects), Databases collection
ms.assetid: 68e9e0da-8382-4fc6-8115-1b1519392ddb
ms.openlocfilehash: 43095707718fe00a746d082d30c689dbd05292bc
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50564788"
---
# <a name="cdaodatabaseinfo-structure"></a>Struttura CDaoDatabaseInfo

Il `CDaoDatabaseInfo` struttura contiene informazioni su un oggetto di database definito per data access Object (DAO).

## <a name="syntax"></a>Sintassi

```
struct CDaoDatabaseInfo
{
    CString m_strName;       // Primary
    BOOL m_bUpdatable;       // Primary
    BOOL m_bTransactions;    // Primary
    CString m_strVersion;    // Secondary
    long m_lCollatingOrder;  // Secondary
    short m_nQueryTimeout;   // Secondary
    CString m_strConnect;    // All
};
```

#### <a name="parameters"></a>Parametri

*m_strName*<br/>
Identifica in modo univoco l'oggetto di database. Per recuperare direttamente questa proprietà, chiamare [CDaoDatabase::GetName](../../mfc/reference/cdaodatabase-class.md#getname). Per informazioni dettagliate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.

*m_bUpdatable*<br/>
Indica se è possibile apportare modifiche al database. Per recuperare direttamente questa proprietà, chiamare [CDaoDatabase::CanUpdate](../../mfc/reference/cdaodatabase-class.md#canupdate). Per informazioni dettagliate, vedere l'argomento "Proprietà aggiornabile" nella Guida di DAO.

*m_bTransactions*<br/>
Indica se un'origine dati supporta le transazioni, la registrazione di una serie di modifiche che può essere eseguito il rollback (annullamento) o il commit (salvata). Se un database è basato sul motore di database Microsoft Jet, la proprietà delle transazioni è diverso da zero ed è possibile utilizzare le transazioni. Altri motori di database potrebbero non supportare le transazioni. Per recuperare direttamente questa proprietà, chiamare [CDaoDatabase::CanTransact](../../mfc/reference/cdaodatabase-class.md#cantransact). Per informazioni dettagliate, vedere l'argomento "Proprietà transazioni" nella Guida di DAO.

*m_strVersion*<br/>
Indica la versione del motore di database Microsoft Jet. Per recuperare direttamente il valore di questa proprietà, chiamare l'oggetto di database [GetVersion](../../mfc/reference/cdaodatabase-class.md#getversion) funzione membro. Per informazioni dettagliate, vedere l'argomento "Proprietà Version" nella Guida di DAO.

*m_lCollatingOrder*<br/>
Specifica la sequenza di ordinamento del testo per il confronto di stringa o l'ordinamento. I valori possibili includono:

- `dbSortGeneral` Usare l'ordine di ordinamento (in lingua inglese, francese, tedesco, portoghese, italiano e spagnolo moderno) generale.

- `dbSortArabic` Utilizzare l'ordinamento arabo.

- `dbSortCyrillic` Utilizzare l'ordinamento russa.

- `dbSortCzech` Utilizzare l'ordinamento cechi.

- `dbSortDutch` Utilizzare l'ordinamento olandese.

- `dbSortGreek` Utilizzare l'ordinamento greco.

- `dbSortHebrew` Utilizzare l'ordinamento ebraico.

- `dbSortHungarian` Utilizzare l'ordinamento ungherese.

- `dbSortIcelandic` Utilizzare l'ordinamento Icelandic.

- `dbSortNorwdan` Utilizzare l'ordinamento norvegese o danese.

- `dbSortPDXIntl` Utilizzare l'ordinamento Paradox International.

- `dbSortPDXNor` Usare il norvegese Paradox o ordinamento danese.

- `dbSortPDXSwe` Usare il paradosso svedese o ordinamento finlandese.

- `dbSortPolish` Utilizzare l'ordinamento polacco.

- `dbSortSpanish` Usare il tipo di ordinamento dello spagnolo.

- `dbSortSwedFin` Utilizzare l'ordinamento svedese o finlandese.

- `dbSortTurkish` Utilizzare l'ordinamento turco.

- `dbSortUndefined` L'ordinamento è definito o è sconosciuto.

Per altre informazioni, vedere l'argomento "Personalizzazione di Windows del Registro di sistema le impostazioni per l'accesso dei dati" nella Guida di DAO.

*m_nQueryTimeout*<br/>
Il numero di secondi di attesa motore di database Microsoft Jet prima di un errore di timeout si verifica quando viene eseguita una query su un database ODBC. Il valore di timeout predefinito è 60 secondi. Quando QueryTimeout viene impostato su 0, si verifica alcun timeout; Ciò può causare il blocco del programma. Per recuperare direttamente il valore di questa proprietà, chiamare l'oggetto di database [GetQueryTimeout](../../mfc/reference/cdaodatabase-class.md#getquerytimeout) funzione membro. Per informazioni dettagliate, vedere l'argomento "Proprietà QueryTimeout" nella Guida di DAO.

*m_strConnect*<br/>
Fornisce informazioni sull'origine di un database aperto. Per informazioni su stringhe di connessione e per informazioni sul recupero direttamente il valore di questa proprietà, vedere la [CDaoDatabase::GetConnect](../../mfc/reference/cdaodatabase-class.md#getconnect) funzione membro. Per altre informazioni, vedere l'argomento "Proprietà connessione" nella Guida di DAO.

## <a name="remarks"></a>Note

Il database è un oggetto DAO sottostante un oggetto MFC della classe [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md). I riferimenti al database primario, secondario e tutti sopra indicano la modalità in cui vengono restituite le informazioni per il [CDaoWorkspace::GetDatabaseInfo](../../mfc/reference/cdaoworkspace-class.md#getdatabaseinfo) funzione membro.

Le informazioni recuperate dal [CDaoWorkspace::GetDatabaseInfo](../../mfc/reference/cdaoworkspace-class.md#getdatabaseinfo) le funzioni membro vengono archiviate un `CDaoDatabaseInfo` struttura. Chiamare `GetDatabaseInfo` per il `CDaoWorkspace` oggetto nella raccolta cui database è archiviato l'oggetto di database. `CDaoDatabaseInfo` definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile usare `Dump` per scaricare il contenuto di un `CDaoDatabaseInfo` oggetto.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao. h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Classe CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md)<br/>
[Classe CDaoDatabase](../../mfc/reference/cdaodatabase-class.md)
