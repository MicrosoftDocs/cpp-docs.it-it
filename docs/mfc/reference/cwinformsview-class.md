---
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
ms.openlocfilehash: 6eb6b9e385e9dbc96eb3b62ffb80909e54569e97
ms.sourcegitcommit: c123cc76bb2b6c5cde6f4c425ece420ac733bf70
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/14/2020
ms.locfileid: "81369598"
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
|[CWinFormsView::GetControl](#getcontrol)|Recupera un puntatore al controllo Windows Form.|

### <a name="public-operators"></a>Operatori pubblici

|Nome||
|----------|-|
|[CWinFormsView::operatore Controllo](#operator_control)|Esegue il cast di un tipo come puntatore a un controllo Windows Form.|

## <a name="remarks"></a>Osservazioni

MFC utilizza `CWinFormsView` la classe per ospitare un controllo Windows Form di .NET Framework all'interno di una visualizzazione MFC. Il controllo è un elemento figlio della visualizzazione nativa e occupa l'intera area client della visualizzazione MFC. Il risultato è `CFormView` simile a una visualizzazione, consentendo di sfruttare la finestra di progettazione Windows Form e il tempo di esecuzione per creare visualizzazioni avanzate basate su form.

Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [Utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

> [!NOTE]
> L'integrazione di Windows Form MFC funziona solo nei progetti che si collegano dinamicamente a MFC (progetti in cui è definito AFXDLL).

> [!NOTE]
> CWinFormsView non supporta la finestra con separatore MFC ( [CSplitterWnd Class](../../mfc/reference/csplitterwnd-class.md)). Attualmente è supportato solo il controllo Splitter di Windows Form.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms.h

## <a name="cwinformsviewcwinformsview"></a><a name="cwinformsview"></a>CWinFormsView::CWinFormsView

Costruisce un oggetto `CWinFormsView`.

```
CWinFormsView(System::Type^ pManagedViewType);
```

### <a name="parameters"></a>Parametri

*pManagedViewType (oggetto pManagedViewType)*<br/>
Puntatore al tipo di dati del controllo utente Windows Form.

### <a name="example"></a>Esempio

Nell'esempio seguente `CUserView` la classe `CWinFormsView` eredita da e `UserControl1` passa `CWinFormsView` il tipo di al costruttore. `UserControl1`è un controllo personalizzato in ControlLibrary1.dll.

[!code-cpp[NVC_MFC_Managed#1](../../mfc/reference/codesnippet/cpp/cwinformsview-class_1.h)]

[!code-cpp[NVC_MFC_Managed#2](../../mfc/reference/codesnippet/cpp/cwinformsview-class_2.cpp)]

## <a name="cwinformsviewgetcontrol"></a><a name="getcontrol"></a>CWinFormsView::GetControl

Recupera un puntatore al controllo Windows Form.

```
System::Windows::Forms::Control^ GetControl() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `System.Windows.Forms.Control`.

### <a name="remarks"></a>Osservazioni

Per un esempio di utilizzo di Windows Form, vedere [Utilizzo di un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

## <a name="cwinformsviewoperator-control"></a><a name="operator_control"></a>CWinFormsView::operatore Controllo

Esegue il cast di un tipo come puntatore a un controllo Windows Form.

```
operator System::Windows::Forms::Control^() const;
```

### <a name="remarks"></a>Osservazioni

Questo operatore consente `CWinFormsView` di passare una visualizzazione alle funzioni che <xref:System.Windows.Forms.Control>accettano un puntatore a un controllo Windows Form di tipo .

### <a name="example"></a>Esempio

  Vedere [CWinFormsView::GetControl](#getcontrol).

## <a name="see-also"></a>Vedere anche

[Grafico delle gerarchie](../../mfc/hierarchy-chart.md)<br/>
[Classe CWinFormsControl](../../mfc/reference/cwinformscontrol-class.md)<br/>
[Classe CWinFormsDialog](../../mfc/reference/cwinformsdialog-class.md)<br/>
[Classe CFormView](../../mfc/reference/cformview-class.md)
