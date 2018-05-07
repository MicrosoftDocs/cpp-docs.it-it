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
ms.openlocfilehash: 337ecf8227f1d5c2abe0369abdea5662f882f3d2
ms.sourcegitcommit: 76b7653ae443a2b8eb1186b789f8503609d6453e
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/04/2018
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
|[CRecentFileList::Add](#add)|Aggiunge un file all'elenco di file dei file più recenti.|  
|[CRecentFileList::GetDisplayName](#getdisplayname)|Fornisce un nome visualizzato per la visualizzazione dal menu di un nome di file dei file più recenti.|  
|[CRecentFileList::GetSize](#getsize)|Recupera il numero di file nell'elenco MRU.|  
|[CRecentFileList::ReadList](#readlist)|Legge l'elenco dei file dei file più recenti dal Registro di sistema o. File INI.|  
|[CRecentFileList::Remove](#remove)|Rimuove un file dall'elenco dei file dei file più recenti.|  
|[CRecentFileList::UpdateMenu](#updatemenu)|Aggiorna la visualizzazione del menu dell'elenco di file dei file più recenti.|  
|[CRecentFileList::WriteList](#writelist)|Scrive l'elenco dei file dei file più recenti dal Registro di sistema o. File INI.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[[] CRecentFileList::operator](#operator_at)|Restituisce un `CString` oggetto in una determinata posizione.|  
  
## <a name="remarks"></a>Note  
 I file possono essere aggiunti o eliminati dall'elenco dei file dei file più recenti, l'elenco dei file può leggere e scritta nel Registro di sistema o un oggetto. Il file INI e il menu di visualizzazione dell'elenco di file dei file più recenti possono essere aggiornati.  
  
 Per ulteriori informazioni sulle voci di menu MRU, vedere  
  
-   Articolo della Knowledge Base Q243751: procedura: aggiungere gestori di comandi per voci di Menu MRU nell'applicazione MFC  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CRecentFileList`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxadv.h  
  
##  <a name="add"></a>  CRecentFileList::Add  
 Aggiunge un file all'elenco dei file utilizzato di recente (MRU).  
  
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
 `lpszPathName`  
 Specifica percorso da aggiungere all'elenco.  
  
 `lpszAppID`  
 Specifica l'ID modello utente dell'applicazione per l'applicazione.  
  
 `pItem`  
 Specifica un puntatore all'elemento Shell da aggiungere all'elenco.  
  
 `pLink`  
 Specifica un puntatore al collegamento Shell da aggiungere all'elenco.  
  
 `pidl`  
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
 `nStart`  
 Offset per la numerazione nella visualizzazione del menu dell'elenco di file MRU (usati di recente).  
  
 `lpszSection`  
 Punta al nome della sezione del Registro di sistema o l'applicazione. File INI in cui l'elenco dei file più recenti dei file è di lettura e/o scritto.  
  
 `lpszEntryFormat`  
 Punta a una stringa di formato da utilizzare per i nomi delle voci memorizzate nel Registro di sistema o l'applicazione. File INI.  
  
 `nSize`  
 Numero massimo di file nell'elenco MRU.  
  
 `nMaxDispLen`  
 Lunghezza massima in caratteri, disponibile per la visualizzazione del menu di un nome di file nell'elenco MRU.  
  
### <a name="remarks"></a>Note  
 La stringa di formato a cui puntava `lpszEntryFormat` deve contenere "%d", che verrà utilizzato per sostituire l'indice di ogni elemento di recente. Ad esempio, se la stringa di formato è `"file%d"` quindi le voci saranno denominate `file0`, `file1`e così via.  
  
##  <a name="getdisplayname"></a>  CRecentFileList::GetDisplayName  
 Ottiene un nome visualizzato per un file nell'elenco di file MRU, da utilizzare nella visualizzazione del menu dell'elenco MRU.  
  
```  
virtual BOOL GetDisplayName(
    CString& strName,  
    int nIndex,  
    LPCTSTR lpszCurDir,  
    int nCurDir,  
    BOOL bAtLeastName = TRUE) const;  
```  
  
### <a name="parameters"></a>Parametri  
 `strName`  
 Percorso completo del file il cui nome viene visualizzato nell'elenco dei file MRU menu.  
  
 `nIndex`  
 Indice in base zero del file nell'elenco di file di recente.  
  
 *lpszCurDir*  
 Stringa che contiene la directory corrente.  
  
 *nCurDir*  
 Lunghezza della stringa di directory corrente.  
  
 `bAtLeastName`  
 Se diverso da zero, indica che deve essere restituito il nome del file di base, anche se supera la lunghezza massima di visualizzazione (passato come il `nMaxDispLen` parametro per il `CRecentFileList` costruttore).  
  
### <a name="return-value"></a>Valore restituito  
 **FALSE** se non è presente alcun nome di file in corrispondenza dell'indice specificato nell'elenco di file utilizzato di recente (MRU).  
  
### <a name="remarks"></a>Note  
 Se il file nella directory corrente, la funzione lascia la directory disattiva la visualizzazione. Se il nome del file è troppo lungo, vengono rimosse la directory e l'estensione. Se il nome del file è ancora troppo lungo, il nome visualizzato è impostato su una stringa vuota, a meno che non `bAtLeastName` è diverso da zero.  
  
##  <a name="getsize"></a>  CRecentFileList::GetSize  
 Recupera il numero di file nell'elenco MRU.  
  
```  
int GetSize() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Il numero di file nell'attuale più recente (MRU) elenco file utilizzati.  
  
##  <a name="operator_at"></a>  [] CRecentFileList::operator  
 L'indice di overload ( `[]`) operatore restituisce un singolo `CString` specificato dall'indice in base zero in `nIndex`.  
  
```  
CString& operator[ ](int nindex);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice in base zero di un `CString` in un set di `CString`s.  
  
##  <a name="readlist"></a>  CRecentFileList::ReadList  
 Legge più recente (MRU) elenco dei file usati dal Registro di sistema o l'applicazione. File INI.  
  
```  
virtual void ReadList();
```  
  
##  <a name="remove"></a>  CRecentFileList::Remove  
 Rimuove un file dall'elenco dei file dei file più recenti.  
  
```  
virtual void Remove(int nIndex);
```  
  
### <a name="parameters"></a>Parametri  
 `nIndex`  
 Indice in base zero del file da rimuovere dall'elenco di file utilizzato di recente (MRU).  
  
##  <a name="updatemenu"></a>  CRecentFileList::UpdateMenu  
 Aggiorna la visualizzazione del menu dell'elenco di file dei file più recenti.  
  
```  
virtual void UpdateMenu(CCmdUI* pCmdUI);
```  
  
### <a name="parameters"></a>Parametri  
 `pCmdUI`  
 Un puntatore al [CCmdUI](../../mfc/reference/ccmdui-class.md) oggetto per il menu dell'elenco file utilizzato di recente (MRU).  
  
##  <a name="writelist"></a>  CRecentFileList::WriteList  
 Scrive più recente (MRU) elenco dei file usati nel Registro di sistema o l'applicazione. File INI.  
  
```  
virtual void WriteList();
```  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



