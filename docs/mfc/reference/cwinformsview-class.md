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
ms.openlocfilehash: f4a5e6b88527dad8606092ccebd4899bba5181f6
ms.sourcegitcommit: 0ab61bc3d2b6cfbd52a16c6ab2b97a8ea1864f12
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/23/2019
ms.locfileid: "62323306"
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
|[Controllo CWinFormsView::operator ^](#operator_control)|Esegue il cast di un tipo come un puntatore a un controllo Windows Form.|

## <a name="remarks"></a>Note

MFC utilizza il `CWinFormsView` classe per ospitare un controllo Windows Form di .NET Framework all'interno di una visualizzazione MFC. Il controllo è un elemento figlio della visualizzazione nativa e occupa l'intera area client della visualizzazione MFC. Il risultato è simile a un `CFormView` vista, consentendo di sfruttare i vantaggi della finestra di progettazione Windows Form e fase di esecuzione per creare visualizzazioni avanzate basate su form.

Per altre informazioni sull'uso di Windows Form, vedere [usando un controllo utente di Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

> [!NOTE]
>  Integrazione dei moduli di Windows di MFC funziona solo nei progetti che si collegano in modo dinamico con MFC (progetti in cui è definita AFXDLL).

> [!NOTE]
>  CWinFormsView non supporta la finestra con separatore MFC ( [classe CSplitterWnd](../../mfc/reference/csplitterwnd-class.md)). Attualmente solo la Windows Forms barra di divisione controllo è supportato.

## <a name="requirements"></a>Requisiti

**Intestazione:** afxwinforms. h

##  <a name="cwinformsview"></a>  CWinFormsView::CWinFormsView

Costruisce un oggetto `CWinFormsView`.

```
CWinFormsView(System::Type^ pManagedViewType);
```

### <a name="parameters"></a>Parametri

*pManagedViewType*<br/>
Puntatore al tipo di dati del controllo utente Windows Form.

### <a name="example"></a>Esempio

Nell'esempio seguente, il `CUserView` classe eredita da `CWinFormsView` e passa il tipo della `UserControl1` per il `CWinFormsView` costruttore. `UserControl1` è un controllo personalizzato in ControlLibrary1.dll.

[!code-cpp[NVC_MFC_Managed#1](../../mfc/reference/codesnippet/cpp/cwinformsview-class_1.h)]

[!code-cpp[NVC_MFC_Managed#2](../../mfc/reference/codesnippet/cpp/cwinformsview-class_2.cpp)]

##  <a name="getcontrol"></a>  CWinFormsView::GetControl

Recupera un puntatore al controllo Windows Form.

```
System::Windows::Forms::Control^ GetControl() const;
```

### <a name="return-value"></a>Valore restituito

Puntatore a un oggetto `System.Windows.Forms.Control` .

### <a name="remarks"></a>Note

Per un esempio di come usare moduli di Windows, vedere [usando un controllo utente di Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).

##  <a name="operator_control"></a>  Controllo CWinFormsView::operator ^

Esegue il cast di un tipo come un puntatore a un controllo Windows Form.

```
operator System::Windows::Forms::Control^() const;
```

### <a name="remarks"></a>Note

Questo operatore consente di passare un `CWinFormsView` visualizzazione per le funzioni che accettano un puntatore a un controllo Windows Form di tipo <xref:System.Windows.Forms.Control>.

### <a name="example"></a>Esempio

  Visualizzare [GetControl](#getcontrol).

## <a name="see-also"></a>Vedere anche

[Grafico della gerarchia](../../mfc/hierarchy-chart.md)<br/>
[Classe CWinFormsControl](../../mfc/reference/cwinformscontrol-class.md)<br/>
[Classe CWinFormsDialog](../../mfc/reference/cwinformsdialog-class.md)<br/>
[Classe CFormView](../../mfc/reference/cformview-class.md)
