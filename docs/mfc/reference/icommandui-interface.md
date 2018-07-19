---
title: Interfaccia ICommandUI | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-mfc
ms.topic: reference
f1_keywords:
- ICommandUI
- AFXWINFORMS/ICommandUI
- AFXWINFORMS/icommandui__Check
- AFXWINFORMS/ICommandUI::ContinueRouting
- AFXWINFORMS/ICommandUI::Enabled
- AFXWINFORMS/ICommandUI::ID
- AFXWINFORMS/ICommandUI::Index
- AFXWINFORMS/ICommandUI::Radio
- AFXWINFORMS/ICommandUI::Text
dev_langs:
- C++
helpviewer_keywords:
- ICommandUI interface [MFC]
ms.assetid: 134afe8d-dcdf-47ca-857a-a166a6b665dd
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 244853c3e0e8e16e3de59017b04fb17e64b8efac
ms.sourcegitcommit: 6408139d5f5ff8928f056bde93d20eecb3520361
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 07/02/2018
ms.locfileid: "37338359"
---
# <a name="icommandui-interface"></a>Interfaccia ICommandUI
Gestisce i comandi dell'interfaccia utente.  
  
## <a name="syntax"></a>Sintassi  
  
```  
interface class ICommandUI  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[icommandui__Check](#check)|Imposta l'elemento di interfaccia utente per questo comando per lo stato di selezione appropriata.|  
|[ICommandUI::ContinueRouting](#continuerouting)|Indica il meccanismo di routing dei comandi per continuare il routing del messaggio corrente lungo la catena dei gestori.|  
|[ICommandUI::Enabled](#enabled)|Abilita o disabilita l'elemento di interfaccia utente per questo comando.|  
|[ICommandUI::ID](#id)|Ottiene l'ID dell'oggetto di interfaccia utente rappresentato dal `ICommandUI` oggetto.|  
|[ICommandUI::Index](#index)|Ottiene l'indice dell'oggetto di interfaccia utente rappresentato dal `ICommandUI` oggetto.|  
|[ICommandUI::Radio](#radio)|Imposta l'elemento di interfaccia utente per questo comando per lo stato di selezione appropriata.|  
|[ICommandUI::Text](#text)|Imposta il testo dell'elemento dell'interfaccia utente per questo comando.|  
  
## <a name="remarks"></a>Note  
 Questa interfaccia fornisce metodi e proprietà che gestiscono i comandi dell'interfaccia utente. `ICommandUI` è simile a [classe CCmdUI](../../mfc/reference/ccmdui-class.md), ad eccezione del fatto che `ICommandUI` viene usato per le applicazioni MFC che interagiscono con i componenti .NET.  
  
 `ICommandUI` viene usato all'interno di un gestore ON_UPDATE_COMMAND_UI in un' [ICommandTarget](../../mfc/reference/icommandtarget-interface.md)-classe derivata. Quando un utente di un'applicazione attiva (Seleziona o clic) viene visualizzato un menu, ogni voce di menu come abilitata o disabilitata. La destinazione di ogni comando di menu fornisce queste informazioni mediante l'implementazione di un gestore ON_UPDATE_COMMAND_UI. Per ogni oggetto comando dell'interfaccia utente nell'applicazione, usare la finestra proprietà per creare una voce nella mappa messaggi e prototipo di funzione per ogni gestore.  
  
 Per altre informazioni sul modo in cui il `ICommandUI` interfaccia viene utilizzata nel routing dei comandi, vedere [procedura: aggiungere comandi (Routing) al controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md).  
  
 Per altre informazioni sull'uso di Windows Form, vedere [usando un controllo utente di Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
 Per altre informazioni sul modo in cui i comandi dell'interfaccia utente sono gestiti in MFC, vedere [classe CCmdUI](../../mfc/reference/ccmdui-class.md).  
  
## <a name="check"></a> ICommandUI::Check  
Imposta l'elemento di interfaccia utente per questo comando per lo stato di selezione appropriata.
```
property UICheckState Check;
```
## <a name="remarks"></a>Note  
Questa proprietà imposta l'elemento di interfaccia utente per questo comando per lo stato di selezione appropriata. Impostare controllo sui valori seguenti:  
- Deselezionare 0  
- 1 controllo  
- Impostare indeterminato 2  

## <a name="continuerouting"></a> ICommandUI::ContinueRouting   
Indica il meccanismo di routing di comandi per continuare il routing del messaggio corrente lungo la catena dei gestori.
```
void ContinueRouting();
```
## <a name="remarks"></a>Note
Si tratta di una funzione membro avanzata che deve essere usata in combinazione con un gestore ON_COMMAND_EX che restituisce FALSE. Per altre informazioni, vedere tecniche nota TN006: mappe messaggi.

## <a name="enabled"></a> ICommandUI::Enabled 
Abilita o disabilita l'elemento di interfaccia utente per questo comando.
```
property bool Enabled;
```
## <a name="remarks"></a>Note
Questa proprietà Abilita o disabilita l'elemento di interfaccia utente per questo comando. Impostare Enabled su true per abilitare l'elemento su FALSE per disabilitarla.

## <a name="id"></a> ICommandUI::ID  
Ottiene l'ID dell'oggetto di interfaccia utente rappresentato dall'oggetto ICommandUI.
```
property unsigned int ID;
```
## <a name="remarks"></a>Note
Questa proprietà ottiene l'ID (handle) della voce di menu, pulsante della barra degli strumenti o un altro oggetto di interfaccia utente rappresentato dall'oggetto ICommandUI.

## <a name="index"></a> ICommandUI::Index   
Ottiene l'indice dell'oggetto di interfaccia utente rappresentato dall'oggetto ICommandUI.
```
property unsigned int Index;
```
## <a name="remarks"></a>Note
Questa proprietà ottiene l'indice (handle) della voce di menu, pulsante della barra degli strumenti o un altro oggetto di interfaccia utente rappresentato dall'oggetto ICommandUI.

## <a name="radio"></a> ICommandUI::Radio 
Imposta l'elemento di interfaccia utente per questo comando per lo stato di selezione appropriata.
```
property bool Radio;
```
## <a name="remarks"></a>Note
Questa proprietà imposta l'elemento di interfaccia utente per questo comando per lo stato di selezione appropriata. Impostare l'opzione a true per abilitare l'elemento; in caso contrario, FALSE.

## <a name="text"></a> ICommandUI::Text 
Imposta il testo dell'elemento dell'interfaccia utente per questo comando.
```
property String^ Text;
```
## <a name="remarks"></a>Note
Questa proprietà imposta il testo dell'elemento dell'interfaccia utente per questo comando. Impostare il testo su un handle di stringa di testo.

## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwinforms. h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)  
  
## <a name="see-also"></a>Vedere anche  
 [Classe CCmdUI](../../mfc/reference/ccmdui-class.md)
