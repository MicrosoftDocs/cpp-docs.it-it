---
title: Struttura CMemoryState | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.reviewer: ''
ms.suite: ''
ms.technology:
- cpp-windows
ms.tgt_pltfrm: ''
ms.topic: reference
f1_keywords:
- CMemoryState
dev_langs:
- C++
helpviewer_keywords:
- CMemoryState structure [MFC]
- memory leaks [MFC], detecting
- detecting memory leaks [MFC]
ms.assetid: 229d9de7-a6f3-4cc6-805b-5a9d9b1bfe1d
caps.latest.revision: 19
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: 20f4c2d7d33d07a5eca5a980c376056c3fe68e2d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="cmemorystate-structure"></a>Struttura CMemoryState
Fornisce un modo pratico per rilevare perdite di memoria nel programma.  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct CMemoryState  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMemoryState::CMemoryState](#cmemorystate)|Costruisce una struttura di tipo classe che controlla i checkpoint di memoria.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMemoryState:: checkpoint](#checkpoint)|Ottiene uno snapshot (checkpoint) dello stato corrente della memoria.|  
|[Funzioni CMemoryState::](#difference)|Calcola la differenza tra due oggetti di tipo `CMemoryState`.|  
|[CMemoryState:: DumpAllObjectsSince](#dumpallobjectssince)|Esegue il dump di un riepilogo di tutti gli oggetti allocati dopo un checkpoint precedente.|  
|[CMemoryState::](#dumpstatistics)|Stampa le statistiche di allocazione di memoria per un `CMemoryState` oggetto.|  
  
## <a name="remarks"></a>Note  
 `CMemoryState`è una struttura e non dispone di una classe di base.  
  
 Una "perdita di memoria" si verifica quando la memoria per un oggetto viene allocata nell'heap ma non disallocata quando non è più necessario. Tali perdite di memoria possono causare errori di memoria insufficiente. Esistono diversi modi per allocare e deallocare la memoria nel programma:  
  
-   Utilizzo di `malloc` /  **libero** famiglia di funzioni della libreria di runtime.  
  
-   Utilizzo delle funzioni di gestione della memoria API di Windows, **LocalAlloc**/ **LocalFree** e **GlobalAlloc**/ **GlobalFree** .  
  
-   Utilizzo di C++ **nuova** e **eliminare** operatori.  
  
 Il `CMemoryState` diagnostica solo rilevare memoria perdite causate quando la memoria allocata tramite il **nuova** operatore non viene deallocato utilizzando **eliminare**. I due gruppi di funzioni di gestione della memoria sono per programmi non C++ e si unisce con **nuova** e **eliminare** nello stesso programma non è consigliata. Una macro aggiuntiva, `DEBUG_NEW`, viene fornito per sostituire il **nuova** operatore quando sono necessari file e numero di riga di rilevamento delle allocazioni di memoria. `DEBUG_NEW`viene utilizzato ogni volta che normalmente utilizzerebbe il **nuova** operatore.  
  
 Come con altri elementi di diagnostica, il `CMemoryState` diagnostica è disponibile solo in versioni di debug del programma. Una versione di debug deve avere il **debug** costante definita.  
  
 Se si ritiene che il programma ha una perdita di memoria, è possibile utilizzare il `Checkpoint`, **differenza**, e `DumpStatistics` funzioni per individuare la differenza tra lo stato di memoria (oggetti allocati) in due diversi punti nel programma esecuzione. Queste informazioni possono essere utili per determinare se una funzione di pulitura di tutti gli oggetti che alloca.  
  
 Se è sufficiente sapere dove si verifica lo sbilanciamento nell'allocazione e deallocazione non fornisce informazioni sufficienti, è possibile utilizzare il `DumpAllObjectsSince` funzione per eseguire il dump di tutti gli oggetti allocati dopo la chiamata precedente a `Checkpoint`. Questo dump viene illustrato l'ordine di allocazione, il file di origine e la riga in cui l'oggetto è stato allocato (se si utilizza `DEBUG_NEW` per l'allocazione) e la derivazione dell'oggetto, l'indirizzo e la dimensione. `DumpAllObjectsSince`chiama anche ogni oggetto `Dump` funzione per fornire informazioni sul relativo stato corrente.  
  
 Per ulteriori informazioni su come usare `CMemoryState` e altri elementi di diagnostica, vedere [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).  
  
> [!NOTE]
>  Le dichiarazioni di oggetti di tipo `CMemoryState` e chiamate alle funzioni membro devono essere racchiuso tra `#if defined(_DEBUG)/#endif` direttive. In questo modo la diagnostica della memoria da includere solo nelle build del programma di debug.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CMemoryState`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
##  <a name="checkpoint"></a>CMemoryState:: checkpoint  
 Accetta uno snapshot del riepilogo di memoria e lo archivia in questa `CMemoryState` oggetto.  
  
```  
void Checkpoint();
```  
  
### <a name="remarks"></a>Note  
 Il `CMemoryState` funzioni membro [differenza](#difference) e [DumpAllObjectsSince](#dumpallobjectssince) utilizzare questi dati di snapshot.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per il [CMemoryState](#cmemorystate) costruttore.  
  
##  <a name="cmemorystate"></a>CMemoryState::CMemoryState  
 Costruisce un oggetto vuoto `CMemoryState` oggetto che deve essere compilata dal [Checkpoint](#checkpoint) o [differenza](#difference) funzione membro.  
  
```  
CMemoryState();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities#18](../../mfc/codesnippet/cpp/cmemorystate-structure_1.cpp)]  
  
##  <a name="difference"></a>Funzioni CMemoryState::  
 Confronta due `CMemoryState` oggetti, quindi Archivia la differenza in questo `CMemoryState` oggetto.  
  
```  
BOOL Difference(
    const CMemoryState& oldState,   
    const CMemoryState& newState);
```  
  
### <a name="parameters"></a>Parametri  
 *oldState*  
 Lo stato iniziale di memoria, come definito da un `CMemoryState` checkpoint.  
  
 *newState*  
 Il nuovo stato di memoria come definito da un `CMemoryState` checkpoint.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se i due stati della memoria sono diversi; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 [Checkpoint](#checkpoint) deve sono stati chiamati per ciascuno dei due parametri di stato di memoria.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per il [CMemoryState](#cmemorystate) costruttore.  
  
##  <a name="dumpallobjectssince"></a>CMemoryState:: DumpAllObjectsSince  
 Chiamate di `Dump` funzione per tutti gli oggetti di un tipo derivato dalla classe `CObject` che sono stati allocati (e sono ancora allocate) dopo l'ultimo [Checkpoint](#checkpoint) chiamare per questo `CMemoryState` oggetto.  
  
```  
void DumpAllObjectsSince() const;

 
```  
  
### <a name="remarks"></a>Note  
 La chiamata `DumpAllObjectsSince` con un valore non inizializzato `CMemoryState` oggetto verrà eseguire il dump di tutti gli oggetti attualmente in memoria.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per il [CMemoryState](#cmemorystate) costruttore.  
  
##  <a name="dumpstatistics"></a>CMemoryState::  
 Stampa un report di statistiche di memoria conciso da un `CMemoryState` oggetto che viene compilato il [differenza](#difference) funzione membro.  
  
```  
void DumpStatistics() const;

 
```  
  
### <a name="remarks"></a>Note  
 Il report viene stampato sul [afxDump](diagnostic-services.md#afxdump) dispositivo, Mostra le operazioni seguenti:  
  
 Un report di esempio vengono fornite informazioni sul numero o quantità di:  
  
-   blocchi liberi  
  
-   blocchi normali  
  
-   Blocchi CRT  
  
-   Ignora i blocchi  
  
-   blocchi client  
  
-   memoria massima utilizzata dal programma in qualsiasi momento (in byte)  
  
-   memoria totale attualmente utilizzata dal programma (in byte)  
  
 I blocchi liberi rappresentano il numero di blocchi la cui deallocazione è stata ritardata se `afxMemDF` è stato impostato su **delayFreeMemDF**. Per ulteriori informazioni, vedere [afxMemDF](diagnostic-services.md#afxmemdf), nella sezione "MFC macro e funzioni globali". Vedere [tipi di blocchi sull'Heap di Debug](http://msdn.microsoft.com/en-us/db2e7f62-0679-4b39-a23f-26f2c2f407c5) per ulteriori informazioni su questi tipi di blocchi.  
  
### <a name="example"></a>Esempio  
  Il codice seguente deve essere inserito in *projname*App.cpp. Definire le variabili globali seguenti:  
  
 [!code-cpp[NVC_MFC_Utilities#40](../../mfc/codesnippet/cpp/cmemorystate-structure_2.cpp)]  
  
 Nel `InitInstance` di funzione, aggiungere la riga:  
  
 [!code-cpp[NVC_MFC_Utilities#41](../../mfc/codesnippet/cpp/cmemorystate-structure_3.cpp)]  
  
 Aggiungere un gestore per il `ExitInstance` funzione e il codice seguente:  
  
 [!code-cpp[NVC_MFC_Utilities#42](../../mfc/codesnippet/cpp/cmemorystate-structure_4.cpp)]  
  
 È ora possibile eseguire il programma in modalità Debug per visualizzare l'output del `DumpStatistics` (funzione).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico della gerarchia](../../mfc/hierarchy-chart.md)



