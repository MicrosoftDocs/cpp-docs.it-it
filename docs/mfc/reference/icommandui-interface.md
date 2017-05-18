---
title: Interfaccia ICommandUI | Documenti di Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
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
- ICommandUI interface
ms.assetid: 134afe8d-dcdf-47ca-857a-a166a6b665dd
caps.latest.revision: 24
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
ms.translationtype: Machine Translation
ms.sourcegitcommit: 040985df34f2613b4e4fae29498721aef15d50cb
ms.openlocfilehash: 1db6b3fa58639140322816c37103566353b15633
ms.contentlocale: it-it
ms.lasthandoff: 02/24/2017

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
|[icommandui__Check](#check)|Imposta l'elemento dell'interfaccia utente per questo comando per lo stato di controllo appropriate.|  
|[ICommandUI::ContinueRouting](#continuerouting)|Indica il meccanismo di routing di comandi per continuare a indirizzare il messaggio corrente lungo la catena di gestori.|  
|[ICommandUI::Enabled](#enabled)|Abilita o disabilita l'elemento dell'interfaccia utente per questo comando.|  
|[ICommandUI::ID](#id)|Ottiene l'ID dell'oggetto di interfaccia utente rappresentato dal `ICommandUI` oggetto.|  
|[ICommandUI::Index](#index)|Ottiene l'indice dell'oggetto di interfaccia utente rappresentato dal `ICommandUI` oggetto.|  
|[ICommandUI::Radio](#radio)|Imposta l'elemento dell'interfaccia utente per questo comando per lo stato di controllo appropriate.|  
|[ICommandUI::Text](#text)|Imposta il testo dell'elemento di interfaccia utente per questo comando.|  
  
## <a name="remarks"></a>Note  
 Questa interfaccia fornisce metodi e proprietà che gestiscono i comandi dell'interfaccia utente. `ICommandUI`è simile a [CCmdUI (classe)](../../mfc/reference/ccmdui-class.md), ad eccezione del fatto che `ICommandUI` viene utilizzato per le applicazioni MFC che interagiscono con componenti .NET.  
  
 `ICommandUI`viene utilizzato all'interno di un `ON_UPDATE_COMMAND_UI` gestore in un [ICommandTarget](../../mfc/reference/icommandtarget-interface.md)-classe derivata. Quando un utente di un'applicazione attiva (Seleziona o clic) viene visualizzato un menu, ciascuna voce di menu come abilitato o disabilitato. La destinazione di ogni comando di menu fornisce queste informazioni mediante l'implementazione di un `ON_UPDATE_COMMAND_UI` gestore. Per ognuno degli oggetti dell'interfaccia utente comando nell'applicazione, utilizzare la finestra proprietà per creare una voce nella mappa messaggi e un prototipo di funzione per ogni gestore.  
  
 Per ulteriori informazioni su come il `ICommandUI` interfaccia viene utilizzata per il routing dei comandi, vedere [procedura: aggiungere comandi (Routing) per il controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md).  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
 Per ulteriori informazioni su come i comandi dell'interfaccia utente sono gestiti in MFC, vedere [CCmdUI (classe)](../../mfc/reference/ccmdui-class.md).  
  
## <a name="check"></a>ICommandUI::Check  
Imposta l'elemento dell'interfaccia utente per questo comando per lo stato di controllo appropriate.
```
property UICheckState Check;
```
## <a name="remarks"></a>Note  
Questa proprietà imposta l'elemento dell'interfaccia utente per questo comando per lo stato di controllo appropriate. Impostare controllo per i valori seguenti:  
- Deselezionare&0;  
- 1 controllo  
- 2 impostare indeterminato  

## <a name="continuerouting"></a>ICommandUI::ContinueRouting   
Indica il meccanismo di routing di comandi per continuare a indirizzare il messaggio corrente lungo la catena di gestori.
```
void ContinueRouting();
```
## <a name="remarks"></a>Note
Si tratta di una funzione membro avanzata che deve essere utilizzata in combinazione con un gestore ON_COMMAND_EX che restituisce FALSE. Per ulteriori informazioni, vedere tecniche nota TN006: mappe messaggi.

## <a name="enabled"></a>ICommandUI::Enabled 
Abilita o disabilita l'elemento dell'interfaccia utente per questo comando.
```
property bool Enabled;
```
## <a name="remarks"></a>Note
Questa proprietà Abilita o disabilita l'elemento dell'interfaccia utente per questo comando. Impostare Enabled su true per abilitare l'elemento su FALSE per disabilitarla.

## <a name="id"></a>ICommandUI::ID  
Ottiene l'ID dell'oggetto di interfaccia utente rappresentato dall'oggetto ICommandUI.
```
property unsigned int ID;
```
## <a name="remarks"></a>Note
Questa proprietà ottiene l'ID (handle) della voce di menu, pulsante della barra degli strumenti o altro oggetto dell'interfaccia utente rappresentato dall'oggetto ICommandUI.

## <a name="index"></a>ICommandUI::Index   
Ottiene l'indice dell'oggetto di interfaccia utente rappresentato dall'oggetto ICommandUI.
```
property unsigned int Index;
```
## <a name="remarks"></a>Note
Questa proprietà ottiene l'indice (handle) della voce di menu, pulsante della barra degli strumenti o altro oggetto dell'interfaccia utente rappresentato dall'oggetto ICommandUI.

## <a name="radio"></a>ICommandUI::Radio 
Imposta l'elemento dell'interfaccia utente per questo comando per lo stato di controllo appropriate.
```
property bool Radio;
```
## <a name="remarks"></a>Note
Questa proprietà imposta l'elemento dell'interfaccia utente per questo comando per lo stato di controllo appropriate. Opzione set a true per abilitare l'elemento. in caso contrario FALSE.

## <a name="text"></a>ICommandUI::Text 
Imposta il testo dell'elemento di interfaccia utente per questo comando.
```
property String^ Text;
```
## <a name="remarks"></a>Note
Questa proprietà imposta il testo dell'elemento di interfaccia utente per questo comando. Impostare il testo a un handle di stringa di testo.

## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwinforms. h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)  
  
## <a name="see-also"></a>Vedere anche  
 [CCmdUI (classe)](../../mfc/reference/ccmdui-class.md)

