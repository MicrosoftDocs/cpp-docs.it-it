---
title: Classe CWinFormsView | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- devlang-cpp
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CWinFormsView
- AFXWINFORMS/CWinFormsView
- AFXWINFORMS/CWinFormsView::CWinFormsView
- AFXWINFORMS/CWinFormsView::GetControl
dev_langs:
- C++
helpviewer_keywords:
- MFC [C++], Windows Forms support
- CWinFormsView class
- Windows Forms [C++], MFC support
ms.assetid: d597e397-6529-469b-88f5-7f65a6b9e895
caps.latest.revision: 26
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
ms.sourcegitcommit: 6c49d711da747e4c6cbad0f883d93196b6a98057
ms.openlocfilehash: 7aadcc1aa887cb6be1ddbb8f3797c4a9e1af5b6a
ms.lasthandoff: 02/24/2017

---
# <a name="cwinformsview-class"></a>Classe CWinFormsView
Fornisce una funzionalità generica per l'hosting di un controllo Windows Form come visualizzazione MFC.  
  
## <a name="syntax"></a>Sintassi  
  
```  
class CWinFormsView : public CView;  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-constructors"></a>Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CWinFormsView::CWinFormsView](#cwinformsview)|Costruisce un oggetto `CWinFormsView`.|  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[GetControl](#getcontrol)|Recupera un puntatore al controllo Windows Form.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|Name||  
|----------|-|  
|[Controllo CWinFormsView::operator ^](#operator_control)|Esegue il cast di un tipo come un puntatore a un controllo Windows Form.|  
  
## <a name="remarks"></a>Note  
 MFC utilizza la `CWinFormsView` classe per ospitare un controllo Windows Form di .NET Framework in una visualizzazione MFC. Il controllo è un elemento figlio della visualizzazione nativa e occupa l'intera area client della visualizzazione MFC. Il risultato è simile a un `CFormView` visualizzazione, che consente di sfruttare i vantaggi della finestra di progettazione Windows Form e fase di esecuzione per creare visualizzazioni complesse basate su form.  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
> [!NOTE]
>  L'integrazione di Windows Form MFC funziona solo nei progetti collegano in modo dinamico a MFC (progetti in cui è definito AFXDLL).  
  
> [!NOTE]
>  CWinFormsView non supporta la finestra con separatore MFC ( [classe CSplitterWnd](../../mfc/reference/csplitterwnd-class.md)). Attualmente solo il Splitter Windows Form il controllo è supportato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwinforms. h  
  
##  <a name="cwinformsview"></a>CWinFormsView::CWinFormsView  
 Costruisce un oggetto `CWinFormsView`.  
  
```  
CWinFormsView(System::Type^ pManagedViewType);  
```  
  
### <a name="parameters"></a>Parametri  
 `pManagedViewType`  
 Puntatore al tipo di dati del controllo utente Windows Form.   
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente, il `CUserView` classe eredita da `CWinFormsView` e passa il tipo di `UserControl1` per il `CWinFormsView` costruttore. `UserControl1`è un controllo personalizzato in ControlLibrary1.dll.  
  
 [!code-cpp[NVC_MFC_Managed n.&1;](../../mfc/reference/codesnippet/cpp/cwinformsview-class_1.h)]  
  
 [!code-cpp[NVC_MFC_Managed n.&2;](../../mfc/reference/codesnippet/cpp/cwinformsview-class_2.cpp)]  
  
##  <a name="getcontrol"></a>GetControl  
 Recupera un puntatore al controllo Windows Form.  
  
```  
System::Windows::Forms::Control^ GetControl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `System.Windows.Forms.Control` oggetto.  
  
### <a name="remarks"></a>Note  
 Per un esempio di come utilizzare Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
##  <a name="operator_control"></a>Controllo CWinFormsView::operator ^  
 Esegue il cast di un tipo come un puntatore a un controllo Windows Form.  
  
```  
operator System::Windows::Forms::Control^() const;  
```  
  
### <a name="remarks"></a>Note  
 Questo operatore consente di passare un `CWinFormsView` visualizzazione alle funzioni che accettano un puntatore a un controllo Windows Form di tipo <xref:System.Windows.Forms.Control>.</xref:System.Windows.Forms.Control>  
  
### <a name="example"></a>Esempio  
  Vedere [GetControl](#getcontrol).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CWinFormsControl](../../mfc/reference/cwinformscontrol-class.md)   
 [Classe CWinFormsDialog](../../mfc/reference/cwinformsdialog-class.md)   
 [Classe CFormView](../../mfc/reference/cformview-class.md)

