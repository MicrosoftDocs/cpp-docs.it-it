---
title: Struttura CDaoDatabaseInfo
ms.date: 09/17/2019
f1_keywords:
- CDaoDatabaseInfo
helpviewer_keywords:
- CDaoDatabaseInfo structure [MFC]
- DAO (Data Access Objects), Databases collection
ms.assetid: 68e9e0da-8382-4fc6-8115-1b1519392ddb
ms.openlocfilehash: 60972aa3ecaef4d38c9a0d0ecc70477796aa37aa
ms.sourcegitcommit: 069e3833bd821e7d64f5c98d0ea41fc0c5d22e53
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 11/21/2019
ms.locfileid: "74304250"
---
# <a name="cdaodatabaseinfo-structure"></a>Struttura CDaoDatabaseInfo

La struttura `CDaoDatabaseInfo` contiene informazioni su un oggetto di database definito per DAO (Data Access Objects). DAO 3,6 è la versione finale ed è considerata obsoleta.

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
Assegna un nome univoco all'oggetto di database. Per recuperare direttamente questa proprietà, chiamare [CDaoDatabase:: GetName](../../mfc/reference/cdaodatabase-class.md#getname). Per informazioni dettagliate, vedere l'argomento relativo alla proprietà Name nella Guida di DAO.

*m_bUpdatable*<br/>
Indica se è possibile apportare modifiche al database. Per recuperare direttamente questa proprietà, chiamare [CDaoDatabase:: CanUpdate](../../mfc/reference/cdaodatabase-class.md#canupdate). Per informazioni dettagliate, vedere l'argomento "proprietà aggiornabile" nella Guida di DAO.

*m_bTransactions*<br/>
Indica se un'origine dati supporta le transazioni, ovvero la registrazione di una serie di modifiche di cui è possibile eseguire il rollback (annullata) o di cui è stato eseguito il commit (salvate). Se un database è basato sul motore di database di Microsoft Jet, la proprietà Transactions è diversa da zero ed è possibile utilizzare le transazioni. Altri motori di database potrebbero non supportare le transazioni. Per recuperare direttamente questa proprietà, chiamare [CDaoDatabase:: CanTransact](../../mfc/reference/cdaodatabase-class.md#cantransact). Per informazioni dettagliate, vedere l'argomento "Proprietà Transactions" nella Guida di DAO.

*m_strVersion*<br/>
Indica la versione del motore di database di Microsoft Jet. Per recuperare direttamente il valore di questa proprietà, chiamare la funzione membro [GetVersion](../../mfc/reference/cdaodatabase-class.md#getversion) dell'oggetto di database. Per informazioni dettagliate, vedere l'argomento "proprietà Version" nella Guida di DAO.

*m_lCollatingOrder*<br/>
Specifica la sequenza di ordinamento nel testo per il confronto o l'ordinamento delle stringhe. I valori possibili includono:

- `dbSortGeneral` utilizzare il tipo di ordinamento generale (inglese, francese, tedesco, portoghese, italiano e spagnolo moderno).

- `dbSortArabic` utilizzare l'ordinamento arabo.

- `dbSortCyrillic` utilizzare l'ordinamento russo.

- `dbSortCzech` utilizzare l'ordinamento ceco.

- `dbSortDutch` utilizzare l'ordinamento olandese.

- `dbSortGreek` utilizzare l'ordinamento greco.

- `dbSortHebrew` utilizzare l'ordinamento ebraico.

- `dbSortHungarian` utilizzare l'ordinamento ungherese.

- `dbSortIcelandic` utilizzare l'ordinamento islandese.

- `dbSortNorwdan` utilizzare l'ordinamento norvegese o danese.

- `dbSortPDXIntl` utilizzare il tipo di ordinamento internazionale Paradox.

- `dbSortPDXNor` utilizzare l'ordinamento Paradox norvegese o danese.

- `dbSortPDXSwe` utilizzare l'ordinamento Paradox svedese o finlandese.

- `dbSortPolish` utilizzare l'ordinamento polacco.

- `dbSortSpanish` utilizzare l'ordinamento spagnolo.

- `dbSortSwedFin` utilizzare l'ordinamento svedese o finlandese.

- `dbSortTurkish` utilizzare l'ordinamento turco.

- `dbSortUndefined` l'ordinamento non è definito o è sconosciuto.

Per ulteriori informazioni, vedere l'argomento "personalizzazione delle impostazioni del registro di sistema di Windows per l'accesso ai dati" nella Guida di DAO.

*m_nQueryTimeout*<br/>
Il numero di secondi di attesa del motore di database di Microsoft Jet prima che si verifichi un errore di timeout durante l'esecuzione di una query in un database ODBC. Il valore di timeout predefinito è 60 secondi. Quando QueryTimeout è impostato su 0, non si verifica alcun timeout. Questa operazione può causare l'interruzione della risposta del programma. Per recuperare direttamente il valore di questa proprietà, chiamare la funzione membro [getQueryTimeout](../../mfc/reference/cdaodatabase-class.md#getquerytimeout) dell'oggetto di database. Per informazioni dettagliate, vedere l'argomento "proprietà QueryTimeout" nella Guida di DAO.

*m_strConnect*<br/>
Fornisce informazioni sull'origine di un database aperto. Per informazioni sulle stringhe di connessione e per informazioni sul recupero diretto del valore di questa proprietà, vedere la funzione membro [CDaoDatabase:: GetConnect](../../mfc/reference/cdaodatabase-class.md#getconnect) . Per ulteriori informazioni, vedere l'argomento "Connect Property" nella Guida di DAO.

## <a name="remarks"></a>Osservazioni

Il database è un oggetto DAO sottostante un oggetto MFC della classe [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md). I riferimenti a primary, Secondary e all sopra indicati indicano il modo in cui le informazioni vengono restituite dalla funzione membro [CDaoWorkspace:: GetDatabaseInfo](../../mfc/reference/cdaoworkspace-class.md#getdatabaseinfo) .

Le informazioni recuperate dalla funzione membro [CDaoWorkspace:: GetDatabaseInfo](../../mfc/reference/cdaoworkspace-class.md#getdatabaseinfo) vengono archiviate in una struttura `CDaoDatabaseInfo`. Chiamare `GetDatabaseInfo` per l'oggetto `CDaoWorkspace` nella cui raccolta di database è archiviato l'oggetto di database. `CDaoDatabaseInfo` definisce anche una funzione membro `Dump` nelle compilazioni di debug. È possibile utilizzare `Dump` per eseguire il dump del contenuto di un oggetto `CDaoDatabaseInfo`.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxdao.h

## <a name="see-also"></a>Vedere anche

[Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)<br/>
[Classe CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md)<br/>
[Classe CDaoDatabase](../../mfc/reference/cdaodatabase-class.md)
