---
title: "CPaneFrameWnd Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CPaneFrameWnd.Serialize"
  - "CPaneFrameWnd.PreTranslateMessage"
  - "CPaneFrameWnd"
  - "CPaneFrameWnd::Serialize"
  - "PreTranslateMessage"
  - "CPaneFrameWnd::PreTranslateMessage"
  - "Serialize"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPaneFrameWnd class"
  - "PreTranslateMessage method"
  - "Serialize method"
ms.assetid: ea3423a3-2763-482e-b763-817036ded10d
caps.latest.revision: 28
caps.handback.revision: 16
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CPaneFrameWnd Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

[!INCLUDE[cpp_fp_under_construction](../../mfc/reference/includes/cpp_fp_under_construction_md.md)]  
  
 Implementa una finestra con mini\-cornice contenente un riquadro.  Il riquadro riempie l'area client della finestra.  
  
## Sintassi  
  
```  
class CPaneFrameWnd : public CWnd  
```  
  
## Membri  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPaneFrameWnd::AddPane](../Topic/CPaneFrameWnd::AddPane.md)|Aggiunge un riquadro.|  
|[CPaneFrameWnd::AddRemovePaneFromGlobalList](../Topic/CPaneFrameWnd::AddRemovePaneFromGlobalList.md)|Aggiunge o rimuove un riquadro dall'elenco globale.|  
|[CPaneFrameWnd::AdjustLayout](../Topic/CPaneFrameWnd::AdjustLayout.md)|Regola il layout della finestra con mini\-cornice.|  
|[CPaneFrameWnd::AdjustPaneFrames](../Topic/CPaneFrameWnd::AdjustPaneFrames.md)||  
|[CPaneFrameWnd::CalcBorderSize](../Topic/CPaneFrameWnd::CalcBorderSize.md)|Calcola le dimensioni dei bordi per una finestra con mini\-cornice.|  
|[CPaneFrameWnd::CalcExpectedDockedRect](../Topic/CPaneFrameWnd::CalcExpectedDockedRect.md)|Calcolare il rettangolo previsto di una finestra ancorata.|  
|[CPaneFrameWnd::CanBeAttached](../Topic/CPaneFrameWnd::CanBeAttached.md)|Determina se il riquadro corrente può essere ancorato a un altro riquadro o a un'altra finestra cornice.|  
|[CPaneFrameWnd::CanBeDockedToPane](../Topic/CPaneFrameWnd::CanBeDockedToPane.md)|Determina se la finestra con mini\-cornice può essere ancorata a un riquadro.|  
|[CPaneFrameWnd::CheckGripperVisibility](../Topic/CPaneFrameWnd::CheckGripperVisibility.md)||  
|[CPaneFrameWnd::ConvertToTabbedDocument](../Topic/CPaneFrameWnd::ConvertToTabbedDocument.md)|Converte un riquadro in un documento a schede.|  
|[CPaneFrameWnd::Create](../Topic/CPaneFrameWnd::Create.md)|Crea una finestra con mini\-cornice e la associa all'oggetto `CPaneFrameWnd`.|  
|[CPaneFrameWnd::CreateEx](../Topic/CPaneFrameWnd::CreateEx.md)|Crea una finestra con mini\-cornice e la associa all'oggetto `CPaneFrameWnd`.|  
|[CPaneFrameWnd::DockPane](../Topic/CPaneFrameWnd::DockPane.md)|Ancora il riquadro.|  
|[CPaneFrameWnd::FindFloatingPaneByID](../Topic/CPaneFrameWnd::FindFloatingPaneByID.md)|Trova un riquadro con l'ID di controllo specificato nell'elenco globale dei riquadri mobili.|  
|[CPaneFrameWnd::FrameFromPoint](../Topic/CPaneFrameWnd::FrameFromPoint.md)|Trova la finestra con mini\-cornice contenente un punto fornito dall'utente.|  
|[CPaneFrameWnd::GetCaptionHeight](../Topic/CPaneFrameWnd::GetCaptionHeight.md)|Restituisce l'altezza del titolo della finestra con mini\-cornice.|  
|[CPaneFrameWnd::GetCaptionRect](../Topic/CPaneFrameWnd::GetCaptionRect.md)|Calcola il rettangolo delimitatore di un titolo di finestra con mini\-cornice.|  
|[CPaneFrameWnd::GetCaptionText](../Topic/CPaneFrameWnd::GetCaptionText.md)|Restituisce il testo del titolo.|  
|[CPaneFrameWnd::GetDockingManager](../Topic/CPaneFrameWnd::GetDockingManager.md)||  
|[CPaneFrameWnd::GetDockingMode](../Topic/CPaneFrameWnd::GetDockingMode.md)|Restituisce la modalità di ancoraggio.|  
|[CPaneFrameWnd::GetFirstVisiblePane](../Topic/CPaneFrameWnd::GetFirstVisiblePane.md)|Restituisce il primo riquadro visibile contenuto in una finestra con mini\-cornice.|  
|[CPaneFrameWnd::GetHotPoint](../Topic/CPaneFrameWnd::GetHotPoint.md)||  
|[CPaneFrameWnd::GetPane](../Topic/CPaneFrameWnd::GetPane.md)|Restituisce un riquadro contenuto nella finestra con mini\-cornice.|  
|[CPaneFrameWnd::GetPaneCount](../Topic/CPaneFrameWnd::GetPaneCount.md)|Restituisce il numero di riquadri contenuti in una finestra con mini\-cornice.|  
|[CPaneFrameWnd::GetParent](../Topic/CPaneFrameWnd::GetParent.md)||  
|[CPaneFrameWnd::GetPinState](../Topic/CPaneFrameWnd::GetPinState.md)||  
|[CPaneFrameWnd::GetRecentFloatingRect](../Topic/CPaneFrameWnd::GetRecentFloatingRect.md)||  
|[CPaneFrameWnd::GetVisiblePaneCount](../Topic/CPaneFrameWnd::GetVisiblePaneCount.md)|Restituisce il numero di riquadri visibili contenuti in una finestra con mini\-cornice.|  
|[CPaneFrameWnd::HitTest](../Topic/CPaneFrameWnd::HitTest.md)|Determina quale parte di una finestra con mini\-cornice si trova in un punto specifico.|  
|[CPaneFrameWnd::IsCaptured](../Topic/CPaneFrameWnd::IsCaptured.md)||  
|[CPaneFrameWnd::IsDelayShow](../Topic/CPaneFrameWnd::IsDelayShow.md)||  
|[CPaneFrameWnd::IsRollDown](../Topic/CPaneFrameWnd::IsRollDown.md)|Determina se eseguire il rolldown di una finestra con mini\-cornice.|  
|[CPaneFrameWnd::IsRollUp](../Topic/CPaneFrameWnd::IsRollUp.md)|Determina se eseguire il rollup di una finestra con mini\-cornice.|  
|[CPaneFrameWnd::KillDockingTimer](../Topic/CPaneFrameWnd::KillDockingTimer.md)|Arresta il timer di ancoraggio.|  
|[CPaneFrameWnd::LoadState](../Topic/CPaneFrameWnd::LoadState.md)|Carica lo stato del riquadro dal Registro di sistema.|  
|[CPaneFrameWnd::OnBeforeDock](../Topic/CPaneFrameWnd::OnBeforeDock.md)|Determina se l'ancoraggio è possibile.|  
|[CPaneFrameWnd::OnDockToRecentPos](../Topic/CPaneFrameWnd::OnDockToRecentPos.md)|Ancora la finestra con mini\-cornice alla posizione più recente.|  
|[CPaneFrameWnd::OnKillRollUpTimer](../Topic/CPaneFrameWnd::OnKillRollUpTimer.md)|Arresta il timer di rollup.|  
|[CPaneFrameWnd::OnMovePane](../Topic/CPaneFrameWnd::OnMovePane.md)|Sposta la finestra con mini\-cornice in base a un offset specificato.|  
|[CPaneFrameWnd::OnPaneRecalcLayout](../Topic/CPaneFrameWnd::OnPaneRecalcLayout.md)|Regola il layout di un riquadro contenuto.|  
|[CPaneFrameWnd::OnSetRollUpTimer](../Topic/CPaneFrameWnd::OnSetRollUpTimer.md)|Imposta il timer di rollup.|  
|[CPaneFrameWnd::OnShowPane](../Topic/CPaneFrameWnd::OnShowPane.md)|Chiamata eseguita dal framework quando un riquadro nella finestra con mini\-cornice è nascosto o visualizzato.|  
|[CPaneFrameWnd::PaneFromPoint](../Topic/CPaneFrameWnd::PaneFromPoint.md)|Restituisce un riquadro contenente un punto fornito dall'utente all'interno di una finestra con mini\-cornice.|  
|[CPaneFrameWnd::Pin](../Topic/CPaneFrameWnd::Pin.md)||  
|`CPaneFrameWnd::PreTranslateMessage`|Usato dalla classe [CWinApp](../../mfc/reference/cwinapp-class.md) per convertire i messaggi della finestra prima che vengano inviati alle funzioni Windows [TranslateMessage](http://msdn.microsoft.com/library/windows/desktop/ms644955) e [DispatchMessage](http://msdn.microsoft.com/library/windows/desktop/ms644934).|  
|[CPaneFrameWnd::RedrawAll](../Topic/CPaneFrameWnd::RedrawAll.md)|Ridisegna tutte le finestre con mini\-cornice.|  
|[CPaneFrameWnd::RemoveNonValidPanes](../Topic/CPaneFrameWnd::RemoveNonValidPanes.md)|Chiamata eseguita dal framework per rimuovere i riquadri non validi.|  
|[CPaneFrameWnd::RemovePane](../Topic/CPaneFrameWnd::RemovePane.md)|Rimuove un riquadro dalla finestra con mini\-cornice.|  
|[CPaneFrameWnd::ReplacePane](../Topic/CPaneFrameWnd::ReplacePane.md)|Sostituisce un riquadro con un altro.|  
|[CPaneFrameWnd::SaveState](../Topic/CPaneFrameWnd::SaveState.md)|Salva lo stato del riquadro nel Registro di sistema.|  
|`CPaneFrameWnd::Serialize`|Legge o scrive l'oggetto corrente da o in un archivio.|  
|[CPaneFrameWnd::SetCaptionButtons](../Topic/CPaneFrameWnd::SetCaptionButtons.md)|Imposta i pulsanti della barra del titolo.|  
|[CPaneFrameWnd::SetDelayShow](../Topic/CPaneFrameWnd::SetDelayShow.md)||  
|[CPaneFrameWnd::SetDockingManager](../Topic/CPaneFrameWnd::SetDockingManager.md)||  
|[CPaneFrameWnd::SetDockingTimer](../Topic/CPaneFrameWnd::SetDockingTimer.md)|Imposta il timer di ancoraggio.|  
|[CPaneFrameWnd::SetDockState](../Topic/CPaneFrameWnd::SetDockState.md)|Imposta lo stato di ancoraggio.|  
|[CPaneFrameWnd::SetHotPoint](../Topic/CPaneFrameWnd::SetHotPoint.md)||  
|[CPaneFrameWnd::SetPreDockState](../Topic/CPaneFrameWnd::SetPreDockState.md)|Chiamata eseguita dal framework per impostare lo stato di pre\-ancoraggio.|  
|[CPaneFrameWnd::SizeToContent](../Topic/CPaneFrameWnd::SizeToContent.md)|Regola le dimensioni di una finestra con mini\-cornice in modo che siano uguali a quelle di un riquadro contenuto.|  
|[CPaneFrameWnd::StartTearOff](../Topic/CPaneFrameWnd::StartTearOff.md)|Separa un menu.|  
|[CPaneFrameWnd::StoreRecentDockSiteInfo](../Topic/CPaneFrameWnd::StoreRecentDockSiteInfo.md)||  
|[CPaneFrameWnd::StoreRecentTabRelatedInfo](../Topic/CPaneFrameWnd::StoreRecentTabRelatedInfo.md)||  
  
### Metodi protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPaneFrameWnd::OnCheckRollState](../Topic/CPaneFrameWnd::OnCheckRollState.md)|Determina se eseguire il rollup o il rolldown di una finestra con mini\-cornice.|  
|[CPaneFrameWnd::OnDrawBorder](../Topic/CPaneFrameWnd::OnDrawBorder.md)|Disegna i bordi di una finestra con mini\-cornice.|  
  
### Membri di dati  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPaneFrameWnd::m\_bUseSaveBits](../Topic/CPaneFrameWnd::m_bUseSaveBits.md)|Specifica se registrare la classe di finestra con lo stile di classe `CS_SAVEBITS`.|  
  
## Note  
 Il framework crea automaticamente un oggetto `CPaneFrameWnd` quando un riquadro passa dallo stato ancorato allo stato mobile.  
  
 È possibile spostare una finestra con mini\-cornice trascinando il relativo contenuto visibile \(ancoraggio immediato\) oppure usando un rettangolo di trascinamento \(ancoraggio standard\).  La modalità di ancoraggio del riquadro contenitore della finestra con mini\-cornice determina il comportamento del trascinamento della finestra con mini\-cornice.  Per altre informazioni, vedere [CBasePane::GetDockingMode](../Topic/CBasePane::GetDockingMode.md).  
  
 I pulsanti sulla barra del titolo di una finestra con mini\-cornice sono visualizzati in modo conforme allo stile del riquadro contenuto.  Se il riquadro può essere chiuso \([CBasePane::CanBeClosed](../Topic/CBasePane::CanBeClosed.md)\), viene visualizzato un pulsante Chiudi.  Se il riquadro ha lo stile `AFX_CBRS_AUTO_ROLLUP`, viene visualizzata una puntina.  
  
 Se si deriva una classe da `CPaneFrameWnd`, è necessario indicare al framework come crearla.  Creare la classe eseguendo l'override di [CPane::CreateDefaultMiniframe](../Topic/CPane::CreateDefaultMiniframe.md), o impostare il membro `CPane::m_pMiniFrameRTC` in modo che punti alle informazioni sulla classe di runtime per la classe.  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CPaneFrameWnd](../../mfc/reference/cpaneframewnd-class.md)  
  
## Requisiti  
 **Intestazione:** afxPaneFrameWnd.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [Classe CWnd](../../mfc/reference/cwnd-class.md)