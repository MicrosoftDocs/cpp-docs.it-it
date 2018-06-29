---
title: Classe CRecentFileList | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CRecentFileList
- AFXADV/CRecentFileList
- AFXADV/CRecentFileList::CRecentFileList
- AFXADV/CRecentFileList::Add
- AFXADV/CRecentFileList::GetDisplayName
- AFXADV/CRecentFileList::GetSize
- AFXADV/CRecentFileList::ReadList
- AFXADV/CRecentFileList::Remove
- AFXADV/CRecentFileList::UpdateMenu
- AFXADV/CRecentFileList::WriteList
dev_langs:
- C++
helpviewer_keywords:
- CRecentFileList [MFC], CRecentFileList
- CRecentFileList [MFC], Add
- CRecentFileList [MFC], GetDisplayName
- CRecentFileList [MFC], GetSize
- CRecentFileList [MFC], ReadList
- CRecentFileList [MFC], Remove
- CRecentFileList [MFC], UpdateMenu
- CRecentFileList [MFC], WriteList
ms.assetid: a77f0524-7584-4582-849a-7e97b76d186e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 8d1dc8b636d0c97bc220f9c7f0f1e1cd165369e0
ms.sourcegitcommit: be0e3457f2884551f18e183ef0ea65c3ded7f689
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/28/2018
ms.locfileid: "37079016"
---
# <a name="crecentfilelist-class"></a>Classe CRecentFileList
Supporta il controllo dell'elenco dei file usati di recente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CRecentFileList  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRecentFileList::CRecentFileList](#crecentfilelist)|Costruisce un oggetto `CRecentFileList`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CRecentFileList::Add](#add)|Aggiunge un file all'elenco dei file dei file più recenti.|  
|[CRecentFileList::GetDisplayName](#getdisplayname)|Fornisce un nome visualizzato per la visualizzazione dal menu di un nome di file di recente.|  
|[CRecentFileList::GetSize](#getsize)|Recupera il numero di file nell'elenco MRU file.|  
|[CRecentFileList::ReadList](#readlist)|Legge l'elenco dei file dei file più recenti dal Registro di sistema o. File INI.|  
|[CRecentFileList::Remove](#remove)|Rimuove un file nell'elenco di file MRU.|  
|[CRecentFileList::UpdateMenu](#updatemenu)|Aggiorna la visualizzazione del menu dell'elenco di file MRU.|  
|[CRecentFileList::WriteList](#writelist)|Scrive l'elenco dei file dei file più recenti dal Registro di sistema o. File INI.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[[] CRecentFileList::operator](#operator_at)|Restituisce un `CString` oggetto in una determinata posizione.|  
  
## <a name="remarks"></a>Note  
 I file possono essere aggiunti o eliminati dall'elenco dei file recente, l'elenco dei file può essere leggere o scritta nel Registro di sistema o un oggetto. Il file INI e il menu di visualizzazione dell'elenco di file MRU possono essere aggiornati.  
  
 Per ulteriori informazioni sulle voci di menu MRU, vedere  
  
-   Articolo della Knowledge Base Q243751: procedura: aggiungere gestori di comandi per voci di Menu MRU nell'applicazione MFC  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CRecentFileList`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxadv.h  
  
##  <a name="add"></a>  CRecentFileList::Add  
 Aggiunge un file all'elenco dei file usato di recente (MRU).  
  
```  
virtual void Add(LPCTSTR lpszPathName);

 
virtual void Add(
    LPCTSTR lpszPathName,
    LPCTSTR lpszAppID);

 
void Add(
    IShellItem* pItem,
    LPCTSTR lpszAppID);

 
void Add(
    IShellLink* pLink,
    LPCTSTR lpszAppID);

 
void Add(
    PIDLIST_ABSOLUTE pidl,
    LPCTSTR lpszAppID);
```  
  
### <a name="parameters"></a>Parametri  
 *lpszPathName*  
 Specifica percorso da aggiungere all'elenco.  
  
 *lpszAppID*  
 Specifica l'ID modello utente dell'applicazione per l'applicazione.  
  
 *pItem*  
 Specifica un puntatore all'elemento della Shell per essere aggiunto all'elenco.  
  
 *pLink*  
 Specifica un puntatore al collegamento Shell da aggiungere all'elenco.  
  
 *PIDL*  
 Specifica il IDLIST per l'elemento della shell che deve essere aggiunti alla cartella documenti recenti.  
  
### <a name="remarks"></a>Note  
 Il nome del file verrà aggiunto all'inizio dell'elenco MRU. Se il nome del file esiste già nell'elenco MRU, verranno spostato nella parte superiore.  
  
##  <a name="crecentfilelist"></a>  CRecentFileList::CRecentFileList  
 Costruisce un oggetto `CRecentFileList`.  
  
```  
CRecentFileList(
    UINT nStart,  
    LPCTSTR lpszSection,  
    LPCTSTR lpszEntryFormat,  
    int nSize,  
    int nMaxDispLen = AFX_ABBREV_FILENAME_LEN);
```  
  
### <a name="parameters"></a>Parametri  
 *n nora*  
 Offset per la numerazione nella visualizzazione del menu dell'elenco di file MRU (usati di recente).  
  
 *lpszSection*  
 Punta al nome della sezione del Registro di sistema o l'applicazione. File INI in cui l'elenco dei file MRU è di lettura e/o scritto.  
  
 *lpszEntryFormat*  
 Punta a una stringa di formato da utilizzare per i nomi delle voci nel Registro di sistema o l'applicazione. File INI.  
  
 *nSize*  
 Numero massimo di file nell'elenco MRU file.  
  
 *nMaxDispLen*  
 Lunghezza massima in caratteri, disponibile per la visualizzazione del menu di un nome di file nell'elenco MRU file.  
  
### <a name="remarks"></a>Note  
 La stringa di formato a cui punta *lpszEntryFormat* deve contenere "%d", che verrà usata per sostituire l'indice di ogni elemento MRU. Ad esempio, se la stringa di formato viene `"file%d"` quindi le voci verranno denominate `file0`, `file1`e così via.  
  
##  <a name="getdisplayname"></a>  CRecentFileList::GetDisplayName  
 Ottiene un nome visualizzato per un file nell'elenco di file MRU da utilizzare nella visualizzazione del menu dell'elenco MRU.  
  
```  
virtual BOOL GetDisplayName(
    CString& strName,  
    int nIndex,  
    LPCTSTR lpszCurDir,  
    int nCurDir,  
    BOOL bAtLeastName = TRUE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 *strName*  
 Percorso completo del file il cui nome viene visualizzato nell'elenco dei file MRU menu.  
  
 *nIndex*  
 Indice in base zero del file nell'elenco MRU file.  
  
 *lpszCurDir*  
 Stringa che contiene la directory corrente.  
  
 *nCurDir*  
 Lunghezza della stringa di directory corrente.  
  
 *bAtLeastName*  
 Se diverso da zero, indica che deve essere restituito il nome di base del file, anche se supera la lunghezza massima di visualizzazione (passato come il *nMaxDispLen* parametro per il `CRecentFileList` costruttore).  
  
### <a name="return-value"></a>Valore restituito  
 **FALSE** se non è presente alcun nome di file in corrispondenza dell'indice specificato nell'elenco di file utilizzato di recente (MRU).  
  
### <a name="remarks"></a>Note  
 Se il file nella directory corrente, la funzione lascia la directory disattiva la visualizzazione. Se il nome del file è troppo lungo, vengono rimosse la directory e l'estensione. Se il nome del file è ancora troppo lungo, il nome visualizzato è impostato su una stringa vuota, a meno che *bAtLeastName* è diverso da zero.  
  
##  <a name="getsize"></a>  CRecentFileList::GetSize  
 Recupera il numero di file nell'elenco MRU file.  
  
```  
int GetSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di file in corrente più di recente (MRU) elenco file utilizzati.  
  
##  <a name="operator_at"></a>  [] CRecentFileList::operator  
 L'indice overload ( `[]`) operatore restituisce un singolo `CString` specificata dall'indice in base zero in *nIndex*.  
  
```  
CString& operator[ ](int nindex);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Indice in base zero di un `CString` in un set di `CString`s.  
  
##  <a name="readlist"></a>  CRecentFileList::ReadList  
 Legge l'elenco di file (MRU) dal Registro di sistema o l'applicazione utilizzati più di recente. File INI.  
  
```  
virtual void ReadList();
```  
  
##  <a name="remove"></a>  CRecentFileList::Remove  
 Rimuove un file nell'elenco di file MRU.  
  
```  
virtual void Remove(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 *nIndex*  
 Indice in base zero del file da rimuovere dall'elenco dei file usato di recente (MRU).  
  
##  <a name="updatemenu"></a>  CRecentFileList::UpdateMenu  
 Aggiorna la visualizzazione del menu dell'elenco di file MRU.  
  
```  
virtual void UpdateMenu(CCmdUI* pCmdUI);
```  
  
### <a name="parameters"></a>Parametri  
 *pCmdUI*  
 Un puntatore per il [CCmdUI](../../mfc/reference/ccmdui-class.md) oggetto per il menu dell'elenco degli ultimi file usato (MRU) file.  
  
##  <a name="writelist"></a>  CRecentFileList::WriteList  
 Scrive utilizzati più di recente elenco file (MRU) nel Registro di sistema o l'applicazione. File INI.  
  
```  
virtual void WriteList();
```  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



