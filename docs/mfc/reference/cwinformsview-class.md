---
title: Classe CWinFormsView | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- CWinFormsView
- AFXWINFORMS/CWinFormsView
- AFXWINFORMS/CWinFormsView::CWinFormsView
- AFXWINFORMS/CWinFormsView::GetControl
dev_langs:
- C++
helpviewer_keywords:
- CWinFormsView [MFC], CWinFormsView
- CWinFormsView [MFC], GetControl
ms.assetid: d597e397-6529-469b-88f5-7f65a6b9e895
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: f5e82dce1d80ee241c8bffae99457c2e25555818
ms.sourcegitcommit: 208d445fd7ea202de1d372d3f468e784e77bd666
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 06/29/2018
ms.locfileid: "37121715"
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
|[GetControl](#getcontrol)|Recupera un puntatore per il controllo Windows Form.|  
  
### <a name="public-operators"></a>Operatori pubblici  
  
|nome||  
|----------|-|  
|[Controllo CWinFormsView::operator ^](#operator_control)|Esegue il cast di un tipo come un puntatore a un controllo Windows Form.|  
  
## <a name="remarks"></a>Note  
 MFC utilizza il `CWinFormsView` classe per ospitare un controllo Windows Form di .NET Framework all'interno di una visualizzazione MFC. Il controllo è un elemento figlio della vista native e occupa l'intera area client della visualizzazione MFC. Il risultato è simile a un `CFormView` visualizzazione, che consente di sfruttare i vantaggi della finestra di progettazione Windows Form e runtime per creare visualizzazioni complesse basata su form.  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
> [!NOTE]
>  Integrazione di Windows Form MFC funziona solo in progetti che consentono di collegare in modo dinamico con MFC (progetti in cui è definito AFXDLL).  
  
> [!NOTE]
>  CWinFormsView non supporta la finestra con separatore MFC ( [classe CSplitterWnd](../../mfc/reference/csplitterwnd-class.md)). Attualmente solo i Windows Form con separatore controllo è supportato.  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwinforms. h  
  
##  <a name="cwinformsview"></a>  CWinFormsView::CWinFormsView  
 Costruisce un oggetto `CWinFormsView`.  
  
```  
CWinFormsView(System::Type^ pManagedViewType);  
```  
  
### <a name="parameters"></a>Parametri  
 *pManagedViewType*  
 Un puntatore al tipo di dati del controllo utente Windows Form.   
  
### <a name="example"></a>Esempio  
 Nell'esempio seguente, il `CUserView` classe eredita da `CWinFormsView` e passa il tipo di `UserControl1` per il `CWinFormsView` costruttore. `UserControl1` è un controllo personalizzato in ControlLibrary1.dll.  
  
 [!code-cpp[NVC_MFC_Managed#1](../../mfc/reference/codesnippet/cpp/cwinformsview-class_1.h)]  
  
 [!code-cpp[NVC_MFC_Managed#2](../../mfc/reference/codesnippet/cpp/cwinformsview-class_2.cpp)]  
  
##  <a name="getcontrol"></a>  GetControl  
 Recupera un puntatore per il controllo Windows Form.  
  
```  
System::Windows::Forms::Control^ GetControl() const;  
```  
  
### <a name="return-value"></a>Valore restituito  
 Un puntatore a un `System.Windows.Forms.Control` oggetto.  
  
### <a name="remarks"></a>Note  
 Per un esempio di come usare Windows Form, vedere [utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
##  <a name="operator_control"></a>  Controllo CWinFormsView::operator ^  
 Esegue il cast di un tipo come un puntatore a un controllo Windows Form.  
  
```  
operator System::Windows::Forms::Control^() const;  
```  
  
### <a name="remarks"></a>Note  
 Questo operatore consente di passare un `CWinFormsView` visualizzazione per le funzioni che accettano un puntatore a un controllo Windows Form di tipo <xref:System.Windows.Forms.Control>.  
  
### <a name="example"></a>Esempio  
  Vedere [GetControl](#getcontrol).  
  
## <a name="see-also"></a>Vedere anche  
 [Grafico delle gerarchie](../../mfc/hierarchy-chart.md)   
 [Classe CWinFormsControl](../../mfc/reference/cwinformscontrol-class.md)   
 [Classe CWinFormsDialog](../../mfc/reference/cwinformsdialog-class.md)   
 [Classe CFormView](../../mfc/reference/cformview-class.md)
