---
title: Struttura CDaoDatabaseInfo | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CDaoDatabaseInfo
dev_langs:
- C++
helpviewer_keywords:
- CDaoDatabaseInfo structure [MFC]
- DAO (Data Access Objects), Databases collection
ms.assetid: 68e9e0da-8382-4fc6-8115-1b1519392ddb
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 7121915671f6e0ab52ae66c53e5ca31fa1faec1c
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
ms.locfileid: "33352740"
---
# <a name="cdaodatabaseinfo-structure"></a>Struttura CDaoDatabaseInfo
Il `CDaoDatabaseInfo` struttura contiene informazioni su un oggetto di database definito per l'accesso oggetti DAO (data).  
  
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
 `m_strName`  
 Identifica in modo univoco l'oggetto di database. Per recuperare direttamente questa proprietà, chiamare [CDaoDatabase::GetName](../../mfc/reference/cdaodatabase-class.md#getname). Per informazioni dettagliate, vedere l'argomento "Proprietà di nome" nella Guida di DAO.  
  
 `m_bUpdatable`  
 Indica se possono essere apportate modifiche al database. Per recuperare direttamente questa proprietà, chiamare [CDaoDatabase::CanUpdate](../../mfc/reference/cdaodatabase-class.md#canupdate). Per informazioni dettagliate, vedere l'argomento "Proprietà aggiornabile" nella Guida di DAO.  
  
 *m_bTransactions*  
 Indica se un'origine dati supporta transazioni, la registrazione di una serie di modifiche che può essere eseguito il rollback (annullamento) o il commit (salvata). Se un database è basato sul motore di database Microsoft Jet, la proprietà di transazioni è diverso da zero ed è possibile utilizzare le transazioni. Altri motori di database potrebbero non supportare le transazioni. Per recuperare direttamente questa proprietà, chiamare [CDaoDatabase::CanTransact](../../mfc/reference/cdaodatabase-class.md#cantransact). Per informazioni dettagliate, vedere l'argomento "Proprietà transazioni" nella Guida di DAO.  
  
 *m_strVersion*  
 Indica la versione del motore di database Microsoft Jet. Per recuperare direttamente il valore di questa proprietà, chiamare l'oggetto di database [GetVersion](../../mfc/reference/cdaodatabase-class.md#getversion) funzione membro. Per informazioni dettagliate, vedere l'argomento "Proprietà Version" nella Guida di DAO.  
  
 `m_lCollatingOrder`  
 Specifica la sequenza di ordinamento nel testo di confronto di stringhe o di ordinamento. I valori possibili includono:  
  
- **dbSortGeneral** utilizzare generale (in lingua inglese, francese, tedesco, portoghese, italiano e spagnolo moderno) dell'ordinamento.  
  
- **dbSortArabic** utilizzare l'ordinamento arabo.  
  
- **dbSortCyrillic** utilizzare l'ordinamento russa.  
  
- **dbSortCzech** utilizzare l'ordinamento cechi.  
  
- **dbSortDutch** utilizzare l'ordinamento olandese.  
  
- **dbSortGreek** utilizzare l'ordinamento greco.  
  
- **dbSortHebrew** utilizzare l'ordinamento ebraico.  
  
- **dbSortHungarian** utilizzare l'ordinamento ungherese.  
  
- **dbSortIcelandic** usare l'ordine dei islandese ordinamento.  
  
- **dbSortNorwdan** utilizzare l'ordinamento norvegese o danese.  
  
- **dbSortPDXIntl** utilizzare all'interno dell'ordinamento Paradox internazionale.  
  
- **dbSortPDXNor** utilizzare Paradox norvegese o ordinamento danese.  
  
- **dbSortPDXSwe** utilizzare Paradox svedese o finlandese di ordinamento.  
  
- **dbSortPolish** utilizzare l'ordinamento polacco.  
  
- **dbSortSpanish** utilizzare l'ordinamento spagnola.  
  
- **dbSortSwedFin** utilizzare l'ordinamento svedese o finlandese.  
  
- **dbSortTurkish** utilizzare l'ordinamento turca.  
  
- **dbSortUndefined** l'ordinamento è definito o è sconosciuta.  
  
 Per ulteriori informazioni, vedere l'argomento "Personalizzazione di Windows del Registro di sistema le impostazioni per l'accesso dati" nella Guida di DAO.  
  
 *m_nQueryTimeout*  
 Il numero di secondi di che attesa prima di un errore di timeout del motore di database Microsoft Jet si verifica quando viene eseguita una query su un database ODBC. Il valore di timeout predefinito è 60 secondi. Quando QueryTimeout è impostata su 0, che si verifica alcun timeout; Ciò può provocare il blocco del programma. Per recuperare direttamente il valore di questa proprietà, chiamare l'oggetto di database [GetQueryTimeout](../../mfc/reference/cdaodatabase-class.md#getquerytimeout) funzione membro. Per informazioni dettagliate, vedere l'argomento "Proprietà QueryTimeout" nella Guida di DAO.  
  
 `m_strConnect`  
 Vengono fornite informazioni sull'origine di un database aperto. Per informazioni sulle stringhe di connessione e per informazioni sul recupero direttamente il valore di questa proprietà, vedere il [CDaoDatabase::GetConnect](../../mfc/reference/cdaodatabase-class.md#getconnect) funzione membro. Per ulteriori informazioni, vedere l'argomento "Proprietà connessione" nella Guida di DAO.  
  
## <a name="remarks"></a>Note  
 Il database è un oggetto DAO sottostante di un oggetto MFC della classe [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md). I riferimenti al database primario, secondario e tutti sopra indicano la modalità in cui vengono restituite le informazioni per il [CDaoWorkspace::GetDatabaseInfo](../../mfc/reference/cdaoworkspace-class.md#getdatabaseinfo) funzione membro.  
  
 Le informazioni recuperate dal [CDaoWorkspace::GetDatabaseInfo](../../mfc/reference/cdaoworkspace-class.md#getdatabaseinfo) le funzioni membro vengono archiviate un `CDaoDatabaseInfo` struttura. Chiamare `GetDatabaseInfo` per il `CDaoWorkspace` oggetto nella raccolta i cui database è archiviato l'oggetto di database. `CDaoDatabaseInfo` definisce inoltre un `Dump` compila la funzione membro in modalità debug. È possibile utilizzare `Dump` per scaricare il contenuto di un `CDaoDatabaseInfo` oggetto.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxdao. h  
  
## <a name="see-also"></a>Vedere anche  
 [Strutture, stili, callback e mappe messaggi](../../mfc/reference/structures-styles-callbacks-and-message-maps.md)   
 [CDaoWorkspace (classe)](../../mfc/reference/cdaoworkspace-class.md)   
 [Classe CDaoDatabase](../../mfc/reference/cdaodatabase-class.md)
