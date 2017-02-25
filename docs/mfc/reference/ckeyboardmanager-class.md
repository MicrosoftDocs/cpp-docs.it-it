---
title: "CKeyboardManager Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CKeyboardManager"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CKeyboardManager class"
ms.assetid: 4809ece6-89df-4479-8b53-9bf476ee107b
caps.latest.revision: 33
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
caps.handback.revision: 35
---
# CKeyboardManager Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Gestisce le tabelle del tasto di scelta rapida per le applicazioni utilizzano figlio e della finestra cornice principale.  
  
## Sintassi  
  
```  
class CKeyboardManager : public CObject  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CKeyboardManager::CKeyboardManager](../Topic/CKeyboardManager::CKeyboardManager.md)|Costruisce un oggetto `CKeyboardManager`.|  
  
### Metodi pubblici  
  
|||  
|-|-|  
|Nome|Descrizione|  
|[CKeyboardManager::CleanUp](../Topic/CKeyboardManager::CleanUp.md)|Rimuove le tabelle del tasto di scelta rapida.|  
|[CKeyboardManager::FindDefaultAccelerator](../Topic/CKeyboardManager::FindDefaultAccelerator.md)|Recupera il tasto di scelta rapida predefinito per il comando e la finestra specificati.|  
|[CKeyboardManager::IsKeyHandled](../Topic/CKeyboardManager::IsKeyHandled.md)|Determina se una chiave è gestita dalla tabella dei tasti di scelta rapida.|  
|[CKeyboardManager::IsKeyPrintable](../Topic/CKeyboardManager::IsKeyPrintable.md)|Indica se un carattere è stampabile.|  
|[CKeyboardManager::IsShowAllAccelerators](../Topic/CKeyboardManager::IsShowAllAccelerators.md)|Indica se i menu mostrano tutti i tasti di scelta rapida per un comando o solo il tasto di scelta rapida predefinito.|  
|[CKeyboardManager::LoadState](../Topic/CKeyboardManager::LoadState.md)|Carica le tabelle del tasto di scelta rapida da Windows Registro di sistema.|  
|[CKeyboardManager::ResetAll](../Topic/CKeyboardManager::ResetAll.md)|Ricarica le tabelle del tasto di scelta rapida dalla risorsa dell'applicazione.|  
|[CKeyboardManager::SaveState](../Topic/CKeyboardManager::SaveState.md)|Salva le tabelle del tasto di scelta rapida a Windows Registro di sistema.|  
|[CKeyboardManager::ShowAllAccelerators](../Topic/CKeyboardManager::ShowAllAccelerators.md)|Specifica se il framework di visualizzare tutti i tasti di scelta rapida per tutti i controlli, o un singolo tasto di scelta rapida per ogni comando.  Questo metodo non influisce sui controlli che contengono solo una chiave di collegamento associato.|  
|[CKeyboardManager::TranslateCharToUpper](../Topic/CKeyboardManager::TranslateCharToUpper.md)|Converte un carattere al relativo log superiore.|  
|[CKeyboardManager::UpdateAccelTable](../Topic/CKeyboardManager::UpdateAccelTable.md)|Aggiorna una tabella dei tasti di scelta rapida a una nuova tabella dei tasti di scelta rapida.|  
  
## Note  
 I membri di questa classe è possibile salvare e le tabelle del tasto di scelta rapida di carico a Windows Registro di sistema, per utilizzare un modello per aggiornare le tabelle di chiave taglia di più breve e individuare il tasto di scelta rapida predefinito per un comando in una finestra cornice.  Inoltre, l'oggetto `CKeyboardManager` consente di controllare quali i tasti di scelta rapida visualizzato all'utente.  
  
 Non è necessario creare un oggetto `CKeyboardManager` manualmente.  Verrà creato automaticamente dal framework dell'applicazione.  Tuttavia, è necessario chiamare [CWinAppEx::InitKeyboardManager](../Topic/CWinAppEx::InitKeyboardManager.md) durante il processo di inizializzazione dell'applicazione.  Per ottenere un puntatore all'amministratore della tastiera per l'applicazione, chiamare [CWinAppEx::GetKeyboardManager](../Topic/CWinAppEx::GetKeyboardManager.md).  
  
## Esempio  
 Nell'esempio seguente viene illustrato come recuperare un puntatore a un oggetto `CKeyboardManager` da una classe `CWinAppEx` e come visualizzare tutti i tasti di scelta rapida associati a comandi di menu.  Questo frammento di codice fa parte [Esempio personalizzato delle pagine](../../top/visual-cpp-samples.md).  
  
 [!code-cpp[NVC_MFC_CustomPages#5](../../mfc/reference/codesnippet/CPP/ckeyboardmanager-class_1.cpp)]  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CKeyboardManager](../../mfc/reference/ckeyboardmanager-class.md)  
  
## Requisiti  
 **intestazione:** afxkeyboardmanager.h  
  
## Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classi](../../mfc/reference/mfc-classes.md)   
 [CWinAppEx Class](../../mfc/reference/cwinappex-class.md)   
 [CWinAppEx::InitKeyboardManager](../Topic/CWinAppEx::InitKeyboardManager.md)   
 [Personalizzazione di tastiera e mouse](../../mfc/keyboard-and-mouse-customization.md)