---
title: Classe CWaitCursor | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CWaitCursor
- AFXWIN/CWaitCursor
- AFXWIN/CWaitCursor::CWaitCursor
- AFXWIN/CWaitCursor::Restore
dev_langs:
- C++
helpviewer_keywords:
- CWaitCursor [MFC], CWaitCursor
- CWaitCursor [MFC], Restore
ms.assetid: 5dfae2ff-d7b6-4383-b0ad-91e0868c67b3
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: d89cd3a27869434bc5874037005fee6a592db233
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37122671"
---
# <a name="cwaitcursor-class"></a>Classe CWaitCursor
Fornisce un modo per mostrare in una riga un cursore di attesa, in genere visualizzato come una clessidra, mentre si sta eseguendo un'operazione di lunga durata.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CWaitCursor  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWaitCursor::CWaitCursor](#cwaitcursor)|Costruisce un `CWaitCursor` dell'oggetto e viene visualizzato il cursore di attesa.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWaitCursor::Restore](#restore)|Ripristina il cursore di attesa dopo che è stato modificato.|  
  
## <a name="remarks"></a>Note  
 `CWaitCursor` non dispone di una classe basa.  
  
 Programmazione consigliate buona Windows richiedono visualizzare un cursore di attesa ogni volta che si sta eseguendo un'operazione che richiede una notevole quantità di tempo.  
  
 Per visualizzare un cursore di attesa, può definire un `CWaitCursor` variabile prima del codice che esegue l'operazione di lunga durata. Costruttore dell'oggetto determina automaticamente il cursore di attesa da visualizzare.  
  
 Quando l'oggetto esce dall'ambito (alla fine del blocco in cui il `CWaitCursor` a un oggetto dichiarato), il relativo distruttore imposta il cursore fino al cursore precedente. In altre parole, l'oggetto esegue automaticamente la pulizia necessaria.  
  
> [!NOTE]
>  A causa di come i relativi costruttori e distruttori di lavoro, `CWaitCursor` gli oggetti vengono sempre dichiarati come variabili locali, ovvero sono mai state dichiarate come le variabili globali né sono allocati con **nuovo**.  
  
 Se si esegue un'operazione che potrebbe causare il cursore da modificare, ad esempio la visualizzazione di una finestra di messaggio o la finestra di dialogo, chiamare il [ripristinare](#restore) funzione membro per ripristinare il cursore di attesa. È possibile chiamare `Restore` anche quando un cursore di attesa è attualmente visualizzato.  
  
 Un altro modo per visualizzare un cursore di attesa consiste nell'utilizzare la combinazione di [CCmdTarget::BeginWaitCursor](../../mfc/reference/ccmdtarget-class.md#beginwaitcursor), [CCmdTarget::EndWaitCursor](../../mfc/reference/ccmdtarget-class.md#endwaitcursor)ed eventualmente [CCmdTarget::RestoreWaitCursor](../../mfc/reference/ccmdtarget-class.md#restorewaitcursor). Tuttavia, `CWaitCursor` è più facile da utilizzare perché non è necessario impostare il cursore fino al cursore precedente al termine dell'operazione di lunga durata.  
  
> [!NOTE]
>  MFC imposta e ripristina il cursore utilizzando il [CWinApp::DoWaitCursor](../../mfc/reference/cwinapp-class.md#dowaitcursor) funzione virtuale. È possibile eseguire l'override di questa funzione per ottenere un comportamento personalizzato.  
  
## <a name="inheritance-hierarchy"></a>Gerarchia di ereditarietà  
 `CWaitCursor`  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwin.h  
  
## <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#62](../../mfc/reference/codesnippet/cpp/cwaitcursor-class_1.cpp)]  
  
##  <a name="cwaitcursor"></a>  CWaitCursor::CWaitCursor  
 Per visualizzare un cursore di attesa, dichiarando un `CWaitCursor` oggetto prima che il codice che esegue l'operazione di lunga durata.  
  
```  
CWaitCursor();
```  
  
### <a name="remarks"></a>Note  
 Il costruttore determina automaticamente il cursore di attesa da visualizzare.  
  
 Quando l'oggetto esce dall'ambito (alla fine del blocco in cui il `CWaitCursor` a un oggetto dichiarato), il relativo distruttore imposta il cursore fino al cursore precedente. In altre parole, l'oggetto esegue automaticamente la pulizia necessaria.  
  
 È possibile sfruttare il fatto che il distruttore viene chiamato alla fine del blocco, che potrebbe essere prima della fine della funzione, per rendere il cursore di attesa attiva solo in una parte di una funzione. Questa tecnica è illustrata nel secondo esempio riportato di seguito.  
  
> [!NOTE]
>  A causa di come i relativi costruttori e distruttori di lavoro, `CWaitCursor` gli oggetti vengono sempre dichiarati come variabili locali, ovvero sono mai state dichiarate come le variabili globali, né sono allocati con **nuovo**.  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#63](../../mfc/reference/codesnippet/cpp/cwaitcursor-class_2.cpp)]  
  
##  <a name="restore"></a>  CWaitCursor::Restore  
 Per ripristinare il cursore di attesa, chiamare questa funzione dopo l'esecuzione di un'operazione, ad esempio la visualizzazione di una finestra di messaggio o finestra di dialogo potrebbe cambiare il cursore di attesa per un altro cursore.  
  
```  
void Restore();
```  
  
### <a name="remarks"></a>Note  
 È anche possibile chiamare `Restore` anche quando il cursore di attesa è attualmente visualizzato.  
  
 Se è necessario ripristinare il cursore di attesa in una funzione diversa da quella in cui il `CWaitCursor` a un oggetto dichiarato, è possibile chiamare [CCmdTarget::RestoreWaitCursor](../../mfc/reference/ccmdtarget-class.md#restorewaitcursor).  
  
### <a name="example"></a>Esempio  
 [!code-cpp[NVC_MFCWindowing#64](../../mfc/reference/codesnippet/cpp/cwaitcursor-class_3.cpp)]  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CCmdTarget::BeginWaitCursor](../../mfc/reference/ccmdtarget-class.md#beginwaitcursor)   
 [CCmdTarget::EndWaitCursor](../../mfc/reference/ccmdtarget-class.md#endwaitcursor)   
 [CCmdTarget::RestoreWaitCursor](../../mfc/reference/ccmdtarget-class.md#restorewaitcursor)   
 [CWinApp::DoWaitCursor](../../mfc/reference/cwinapp-class.md#dowaitcursor)   
 [Come ricerca per categorie: modifica il cursore del Mouse in un'applicazione di classi Microsoft Foundation](http://go.microsoft.com/fwlink/p/?linkid=128044)



