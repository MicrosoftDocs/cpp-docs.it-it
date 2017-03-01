---
title: Struttura CMemoryState | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CMemoryState
dev_langs:
- C++
helpviewer_keywords:
- CMemoryState structure
- memory leaks, detecting
- detecting memory leaks
ms.assetid: 229d9de7-a6f3-4cc6-805b-5a9d9b1bfe1d
caps.latest.revision: 19
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
translationtype: Machine Translation
ms.sourcegitcommit: 0e0c08ddc57d437c51872b5186ae3fc983bb0199
ms.openlocfilehash: 037c8f075a14346e3428c5e19bfda662c4f3c2b0
ms.lasthandoff: 02/24/2017

---
# <a name="cmemorystate-structure"></a>Struttura CMemoryState
Fornisce un modo pratico per rilevare le perdite di memoria nel programma.  
  
## <a name="syntax"></a>Sintassi  
  
```  
struct CMemoryState  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMemoryState::CMemoryState](#cmemorystate)|Costruisce una struttura di classe che controlla i checkpoint di memoria.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CMemoryState:: checkpoint](#checkpoint)|Ottiene uno snapshot (checkpoint) dello stato corrente della memoria.|  
|[Funzioni CMemoryState::](#difference)|Calcola la differenza tra due oggetti di tipo `CMemoryState`.|  
|[CMemoryState:: DumpAllObjectsSince](#dumpallobjectssince)|Esegue il dump di un riepilogo di tutti gli oggetti attualmente allocati da un punto di arresto precedente.|  
|[CMemoryState::](#dumpstatistics)|Stampa le statistiche di allocazione di memoria per un `CMemoryState` oggetto.|  
  
## <a name="remarks"></a>Note  
 `CMemoryState`è una struttura e non dispone di una classe di base.  
  
 Una "perdita di memoria" si verifica quando la memoria per un oggetto viene allocata sull'heap ma non disallocata quando non è più necessaria. Tali perdite di memoria possono causare errori di memoria esaurita. Esistono diversi modi per allocare e deallocare la memoria nel programma:  
  
-   Utilizzo di `malloc` /  **gratuita** famiglia di funzioni dalla libreria di runtime.  
  
-   Utilizzo delle funzioni di gestione della memoria dell'API di Windows, **LocalAlloc**/ **LocalFree** e **GlobalAlloc**/ **GlobalFree**.  
  
-   Utilizzo di C++ **nuova** e **eliminare** operatori.  
  
 Il `CMemoryState` diagnostica solo rilevare memoria perdite causate quando la memoria allocata tramite il **nuova** operatore deallocazione non avviene tramite **eliminare**. I due gruppi di funzioni di gestione della memoria sono per i programmi non C++ e combinare con **nuova** e **eliminare** nello stesso programma non è consigliabile. Una macro aggiuntiva, `DEBUG_NEW`, viene fornito per sostituire il **nuova** operatore quando sono necessari file e numero di riga di rilevamento delle allocazioni di memoria. `DEBUG_NEW`viene utilizzato ogni volta che normalmente si utilizzerebbe il **nuova** operatore.  
  
 Come con altri elementi di diagnostica, il `CMemoryState` diagnostica è disponibile solo in versioni di debug del programma. Una versione di debug è necessario disporre di **debug** costante definita.  
  
 Se si ritiene che il programma dispone di una perdita di memoria, è possibile utilizzare il `Checkpoint`, **differenza**, e `DumpStatistics` funzioni per individuare la differenza tra lo stato di memoria (gli oggetti allocati) in due momenti diversi nell'esecuzione del programma. Queste informazioni possono essere utili per determinare se una funzione di pulizia di tutti gli oggetti che alloca.  
  
 Se è sufficiente sapere dove si verifica lo sbilanciamento allocazione e deallocazione non fornisce informazioni sufficienti, è possibile utilizzare il `DumpAllObjectsSince` funzione per eseguire il dump di tutti gli oggetti allocati dalla chiamata precedente a `Checkpoint`. Questo dump viene illustrato l'ordine di allocazione, il file di origine e riga in cui l'oggetto allocato (se si utilizza `DEBUG_NEW` per l'allocazione) e la derivazione dell'oggetto, l'indirizzo e la dimensione. `DumpAllObjectsSince`chiama anche ogni oggetto `Dump` funzione per fornire informazioni sullo stato corrente.  
  
 Per ulteriori informazioni su come usare `CMemoryState` e altri elementi di diagnostica, vedere [debug di applicazioni MFC](/visualstudio/debugger/mfc-debugging-techniques).  
  
> [!NOTE]
>  Dichiarazioni di oggetti di tipo `CMemoryState` e chiamate alle funzioni membro devono essere racchiuso tra `#if defined(_DEBUG)/#endif` direttive. In questo modo la diagnostica della memoria da includere solo nelle build del programma di debug.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CMemoryState`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afx.h  
  
##  <a name="a-namecheckpointa--cmemorystatecheckpoint"></a><a name="checkpoint"></a>CMemoryState:: checkpoint  
 Accetta uno snapshot di riepilogo della memoria e lo archivia in questo `CMemoryState` oggetto.  
  
```  
void Checkpoint();
```  
  
### <a name="remarks"></a>Note  
 Il `CMemoryState` funzioni membro [differenza](#difference) e [DumpAllObjectsSince](#dumpallobjectssince) utilizzare questi dati di snapshot.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per il [CMemoryState](#cmemorystate) costruttore.  
  
##  <a name="a-namecmemorystatea--cmemorystatecmemorystate"></a><a name="cmemorystate"></a>CMemoryState::CMemoryState  
 Costruisce un oggetto vuoto `CMemoryState` oggetto che deve essere compilata dalla [Checkpoint](#checkpoint) o [differenza](#difference) funzione membro.  
  
```  
CMemoryState();
```  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFC_Utilities&#18;](../../mfc/codesnippet/cpp/cmemorystate-structure_1.cpp)]  
  
##  <a name="a-namedifferencea--cmemorystatedifference"></a><a name="difference"></a>Funzioni CMemoryState::  
 Confronta due `CMemoryState` oggetti, quindi Archivia la differenza in questo `CMemoryState` oggetto.  
  
```  
BOOL Difference(
    const CMemoryState& oldState,   
    const CMemoryState& newState);
```  
  
### <a name="parameters"></a>Parametri  
 *oldState*  
 Lo stato di memoria iniziale come definito da un `CMemoryState` checkpoint.  
  
 *newState*  
 Il nuovo stato di memoria definito da un `CMemoryState` checkpoint.  
  
### <a name="return-value"></a>Valore restituito  
 Diverso da zero se i due stati della memoria sono diversi; in caso contrario 0.  
  
### <a name="remarks"></a>Note  
 [Checkpoint](#checkpoint) necessario sono stati chiamati per ciascuno dei due parametri di stato di memoria.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per il [CMemoryState](#cmemorystate) costruttore.  
  
##  <a name="a-namedumpallobjectssincea--cmemorystatedumpallobjectssince"></a><a name="dumpallobjectssince"></a>CMemoryState:: DumpAllObjectsSince  
 Chiamate di `Dump` funzione per tutti gli oggetti di un tipo derivato dalla classe `CObject` che sono stati allocati (e sono ancora allocate) dall'ultimo [Checkpoint](#checkpoint) chiamare per questo `CMemoryState` oggetto.  
  
```  
void DumpAllObjectsSince() const;

 
```  
  
### <a name="remarks"></a>Note  
 La chiamata a `DumpAllObjectsSince` con un valore non inizializzato `CMemoryState` oggetto sarà eseguire il dump di tutti gli oggetti attualmente in memoria.  
  
### <a name="example"></a>Esempio  
  Vedere l'esempio per il [CMemoryState](#cmemorystate) costruttore.  
  
##  <a name="a-namedumpstatisticsa--cmemorystatedumpstatistics"></a><a name="dumpstatistics"></a>CMemoryState::  
 Consente di stampare un report di statistiche di memoria conciso da un `CMemoryState` oggetto che viene compilato il [differenza](#difference) funzione membro.  
  
```  
void DumpStatistics() const;

 
```  
  
### <a name="remarks"></a>Note  
 Il report, che viene stampato nella [afxDump](http://msdn.microsoft.com/library/4b3cfa3f-fb75-456a-9d99-a5601acbcb11) dispositivo, viene illustrato quanto segue:  
  
 Un report di esempio vengono fornite informazioni sul numero (o quantità) di:  
  
-   blocchi liberi  
  
-   blocchi normali  
  
-   Blocchi CRT  
  
-   Ignora i blocchi  
  
-   blocchi client  
  
-   memoria massima utilizzata dal programma in qualsiasi momento (in byte)  
  
-   memoria totale attualmente utilizzata dal programma (in byte)  
  
 I blocchi liberi rappresentano il numero di blocchi la cui deallocazione è stata ritardata se `afxMemDF` è stata impostata su **delayFreeMemDF**. Per ulteriori informazioni, vedere [afxMemDF](diagnostic-services.md#afxmemdf), nella sezione "MFC macro e funzioni globali". Vedere [tipi di blocchi sull'Heap di Debug](http://msdn.microsoft.com/en-us/db2e7f62-0679-4b39-a23f-26f2c2f407c5) per ulteriori informazioni su questi tipi di blocchi.  
  
### <a name="example"></a>Esempio  
  Il codice seguente deve essere inserito *projname*App.cpp. Definire le variabili globali seguenti:  
  
 [!code-cpp[&#40; NVC_MFC_Utilities](../../mfc/codesnippet/cpp/cmemorystate-structure_2.cpp)]  
  
 Nel `InitInstance` , aggiungere la riga:  
  
 [!code-cpp[NVC_MFC_Utilities n.&41;](../../mfc/codesnippet/cpp/cmemorystate-structure_3.cpp)]  
  
 Aggiungere un gestore per il `ExitInstance` funzione e il codice seguente:  
  
 [!code-cpp[NVC_MFC_Utilities&#42;](../../mfc/codesnippet/cpp/cmemorystate-structure_4.cpp)]  
  
 È ora possibile eseguire il programma in modalità Debug per visualizzare l'output del `DumpStatistics` (funzione).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)




