---
description: 'Altre informazioni su: classe CWinFormsView'
title: Classe CWinFormsView
ms.date: 11/04/2016
f1_keywords:
- CWinFormsView
- AFXWINFORMS/CWinFormsView
- AFXWINFORMS/CWinFormsView::CWinFormsView
- AFXWINFORMS/CWinFormsView::GetControl
helpviewer_keywords:
- CWinFormsView [MFC], CWinFormsView
- CWinFormsView [MFC], GetControl
ms.assetid: d597e397-6529-469b-88f5-7f65a6b9e895
ms.openlocfilehash: 09dad434ebe0e0011fef5836196fd15e25390536
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97318429"
---
# <a name="cwinformsview-class"></a>Classe CWinFormsView

Fornisce una funzionalità generica per l'hosting di un controllo Windows Form come visualizzazione MFC.

## <a name="syntax"></a>Sintassi

```
class CWinFormsView : public CView;
```

## <a name="members"></a>Members

### <a name="public-constructors"></a>Costruttori pubblici

|Nome|Description|
|----------|-----------------|
|[CWinFormsView:: CWinFormsView](#cwinformsview)|Costruisce un oggetto `CWinFormsView`.|

### <a name="public-methods"></a>Metodi pubblici

|Nome|Description|
|----------|-----------------|
|[CWinFormsView:: GetControl](#getcontrol)|Recupera un puntatore al controllo Windows Forms.|

### <a name="public-operators"></a>Operatori pubblici

|Nome|Description|
|----------|-|
|[CWinFormsView:: operator (controllo) ^](#operator_control)|Esegue il cast di un tipo come puntatore a un controllo Windows Forms.|

## <a name="remarks"></a>Commenti

MFC utilizza la `CWinFormsView` classe per ospitare un controllo .NET Framework Windows Forms all'interno di una visualizzazione MFC. Il controllo è un elemento figlio della visualizzazione nativa e occupa l'intera area client della visualizzazione MFC. Il risultato è simile a una `CFormView` visualizzazione, che consente di sfruttare i vantaggi della finestra di progettazione Windows Forms e del tempo di esecuzione per creare visualizzazioni basate su form avanzate.

Per ulteriori informazioni sull'utilizzo di Windows Forms, vedere [utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

> [!NOTE]
> L'integrazione di MFC Windows Forms funziona solo nei progetti che si collegano dinamicamente a MFC (progetti in cui è definito AFXDLL).

> [!NOTE]
> CWinFormsView non supporta la finestra con separatore MFC ( [classe CSplitterWnd](../../mfc/reference/csplitterwnd-class.md)). Attualmente è supportato solo il controllo separatore Windows Forms.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms. h

## <a name="cwinformsviewcwinformsview"></a><a name="cwinformsview"></a> CWinFormsView:: CWinFormsView

Costruisce un oggetto `CWinFormsView`.

```
CWinFormsView(System::Type^ pManagedViewType);
```

### <a name="parameters"></a>Parametri

*pManagedViewType*<br/>
Puntatore al tipo di dati del controllo Windows Forms utente.

### <a name="example"></a>Esempio

Nell'esempio seguente la `CUserView` classe eredita da `CWinFormsView` e passa il tipo di `UserControl1` al `CWinFormsView` costruttore. `UserControl1` è un controllo personalizzato in ControlLibrary1.dll.

[!code-cpp[NVC_MFC_Managed#1](../../mfc/reference/codesnippet/cpp/cwinformsview-class_1.h)]

[!code-cpp[NVC_MFC_Managed#2](../../mfc/reference/codesnippet/cpp/cwinformsview-class_2.cpp)]

## <a name="cwinformsviewgetcontrol"></a><a name="getcontrol"></a> CWinFormsView:: GetControl

Recupera un puntatore al controllo Windows Forms.

```
System::Windows::Forms::Control^ GetControl() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `System.Windows.Forms.Control`.

### <a name="remarks"></a>Commenti

Per un esempio di come usare Windows Forms, vedere [uso di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

## <a name="cwinformsviewoperator-control"></a><a name="operator_control"></a> CWinFormsView:: operator (controllo) ^

Esegue il cast di un tipo come puntatore a un controllo Windows Forms.

```
operator System::Windows::Forms::Control^() const;
```

### <a name="remarks"></a>Commenti

Questo operatore consente di passare una `CWinFormsView` visualizzazione a funzioni che accettano un puntatore a un controllo Windows Forms di tipo <xref:System.Windows.Forms.Control> .

### <a name="example"></a>Esempio

  Vedere [CWinFormsView:: GetControl](#getcontrol).

## <a name="see-also"></a>Vedi anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CWinFormsControl](../../mfc/reference/cwinformscontrol-class.md)<br/>
[Classe CWinFormsDialog](../../mfc/reference/cwinformsdialog-class.md)<br/>
[Classe CFormView](../../mfc/reference/cformview-class.md)
