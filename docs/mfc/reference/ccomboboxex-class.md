---
title: "CComboBoxEx Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CComboBoxEx"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComboBoxEx class"
  - "caselle combinate [C++], CComboBoxEx class"
  - "common controls [C++], extended combo boxes"
  - "extended combo boxes, CComboBoxEx class"
  - "Internet Explorer 4.0 common controls"
  - "Windows common controls [C++], extended combo boxes"
ms.assetid: 33ca960a-2409-478c-84a4-a2ee8ecfe8f7
caps.latest.revision: 26
caps.handback.revision: 15
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CComboBoxEx Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Estende il controllo casella combinata fornire supporto per gli elenchi immagini.  
  
## Sintassi  
  
```  
class CComboBoxEx : public CComboBox  
```  
  
## Membri  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComboBoxEx::CComboBoxEx](../Topic/CComboBoxEx::CComboBoxEx.md)|Costruisce un oggetto `CComboBoxEx`.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CComboBoxEx::Create](../Topic/CComboBoxEx::Create.md)|Crea la casella combinata e allegarlo all'oggetto `CComboBoxEx`.|  
|[CComboBoxEx::CreateEx](../Topic/CComboBoxEx::CreateEx.md)|Crea una casella combinata con gli stili estesi Windows specificati e allegarlo a un oggetto **ComboBoxEx**.|  
|[CComboBoxEx::DeleteItem](../Topic/CComboBoxEx::DeleteItem.md)|Rimuove un elemento da un controllo **ComboBoxEx**.|  
|[CComboBoxEx::GetComboBoxCtrl](../Topic/CComboBoxEx::GetComboBoxCtrl.md)|Recupera un puntatore al controllo combobox figlio.|  
|[CComboBoxEx::GetEditCtrl](../Topic/CComboBoxEx::GetEditCtrl.md)|Recupera l'handle la parte del controllo di modifica di controllo **ComboBoxEx**.|  
|[CComboBoxEx::GetExtendedStyle](../Topic/CComboBoxEx::GetExtendedStyle.md)|Recupera gli stili estesi utilizzati per un controllo **ComboBoxEx**.|  
|[CComboBoxEx::GetImageList](../Topic/CComboBoxEx::GetImageList.md)|Recupera un puntatore all'elenco immagini assegnato a un controllo **ComboBoxEx**.|  
|[CComboBoxEx::GetItem](../Topic/CComboBoxEx::GetItem.md)|Recupera le informazioni sull'elemento per un dato elemento **ComboBoxEx**.|  
|[CComboBoxEx::HasEditChanged](../Topic/CComboBoxEx::HasEditChanged.md)|Determina se l'utente ha modificato il contenuto del controllo di modifica **ComboBoxEx** digitando.|  
|[CComboBoxEx::InsertItem](../Topic/CComboBoxEx::InsertItem.md)|Inserisce un nuovo elemento in un controllo **ComboBoxEx**.|  
|[CComboBoxEx::SetExtendedStyle](../Topic/CComboBoxEx::SetExtendedStyle.md)|Stili estesi insieme all'interno di un controllo **ComboBoxEx**.|  
|[CComboBoxEx::SetImageList](../Topic/CComboBoxEx::SetImageList.md)|Imposta un elenco immagini per un controllo **ComboBoxEx**.|  
|[CComboBoxEx::SetItem](../Topic/CComboBoxEx::SetItem.md)|Imposta gli attributi di un elemento in un controllo **ComboBoxEx**.|  
|[CComboBoxEx::SetWindowTheme](../Topic/CComboBoxEx::SetWindowTheme.md)|Consente di impostare lo stile di visualizzazione del controllo casella combinata estesa.|  
  
## Note  
 Utilizzando `CComboBoxEx` per creare i controlli casella combinata, non sarà più necessario implementare il proprio codice di disegno di immagini.  In alternativa, utilizzare `CComboBoxEx` accedere alle immagini da un elenco.  
  
## Supporto dell'elenco immagini  
 In una casella combinata standard, il proprietario della casella combinata è responsabile della creazione di un'immagine creando una casella combinata come controllo del disegno personalizzato.  Quando si utilizza `CComboBoxEx`, non è necessario impostare gli stili di disegno **CBS\_OWNERDRAWFIXED** e **CBS\_HASSTRINGS** perché sono coinvolti.  In caso contrario, è necessario scrivere il codice per eseguire operazioni di disegno.  Un controllo `CComboBoxEx` supporta fino a tre immagini per elemento: uno a uno stato selezionato, uno a uno stato non selezionato e uno per un'immagine sovrapposta.  
  
## Stili  
 `CComboBoxEx` supporta gli stili **CBS\_SIMPLE**, **CBS\_DROPDOWN**, **CBS\_DROPDOWNLIST**e **WS\_CHILD**.  Tutti gli altri stili passati quando si crea la finestra vengono ignorati dal controllo.  Dopo la finestra viene creata, è possibile fornire altri stili della casella combinata chiamando la funzione membro [SetExtendedStyle](../Topic/CComboBoxEx::SetExtendedStyle.md)di `CComboBoxEx`.  Con questi stili, è possibile:  
  
-   Ricerca di stringhe definite nell'elenco da distinzione tra maiuscole e minuscole.  
  
-   Creare un controllo casella combinata che utilizza la barra \("\/"\), la barra rovesciata \(" \\ "\) e caratteri di punto \(". "\) come delimitatori di parola.  Ciò consente agli utenti di passare dalla parola di parola, utilizzando la COMBINAZIONE di scelta rapida CTRL\+.  
  
-   Impostare il controllo casella combinata in visualizzazione o non visualizza un'immagine.  Se non viene visualizzata alcuna immagine, la casella combinata può rimuovere il rientro di testo che supporta un'immagine.  
  
-   Creare un controllo casella combinata ristretto, inclusi graduarlo in base a pertanto taglia il più lunga casella combinata che contiene.  
  
 Questi flag di stile vengono descritti ulteriormente in [Utilizzando CComboBoxEx](../../mfc/using-ccomboboxex.md).  
  
## Attributi di memorizzazione dell'elemento e dell'elemento di callback  
 Le informazioni sull'elemento, come indici per gli elementi e le immagini, valori di rientro e stringhe di testo, vengono archiviate in Win32 nella struttura [COMBOBOXEXITEM](http://msdn.microsoft.com/library/windows/desktop/bb775746), come descritto in [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  La struttura contiene membri che corrispondono ai flag di callback.  
  
 Per una descrizione dettagliata e concettuale, vedere [Utilizzando CComboBoxEx](../../mfc/using-ccomboboxex.md).  
  
## Gerarchia di ereditarietà  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CCmdTarget](../../mfc/reference/ccmdtarget-class.md)  
  
 [CWnd](../../mfc/reference/cwnd-class.md)  
  
 [CComboBox](../../mfc/reference/ccombobox-class.md)  
  
 `CComboBoxEx`  
  
## Requisiti  
 **Header:** afxcmn.h  
  
## Vedere anche  
 [Esempio MFCIE MFC](../../top/visual-cpp-samples.md)   
 [CComboBox Class](../../mfc/reference/ccombobox-class.md)   
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [CComboBox Class](../../mfc/reference/ccombobox-class.md)