---
title: Interfaccia ICommandTarget | Documenti Microsoft
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- ICommandTarget
- AFXWINFORMS/ICommandTarget
- AFXWINFORMS/ICommandTarget::Initialize
dev_langs:
- C++
helpviewer_keywords:
- ICommandTarget interface [MFC]
ms.assetid: dd9927f6-3479-4e7c-8ef9-13206cf901f3
caps.latest.revision: 
author: mikeblome
ms.author: mblome
manager: ghogen
ms.workload:
- cplusplus
ms.openlocfilehash: be8adb388bed39f91637dd1ef37ee1ee895f291d
ms.sourcegitcommit: 8fa8fdf0fbb4f57950f1e8f4f9b81b4d39ec7d7a
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/21/2017
---
# <a name="icommandtarget-interface"></a>Interfaccia ICommandTarget
Fornisce un controllo utente con un'interfaccia per ricevere comandi da un oggetto di origine del comando.  
  
## <a name="syntax"></a>Sintassi  
  
```  
interface class ICommandTarget  
```  
  
## <a name="members"></a>Membri  
  
### <a name="public-methods"></a>Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[ICommandTarget:: Initialize](#initialize)|Inizializza l'oggetto di destinazione del comando.|  
  
## <a name="remarks"></a>Note  
 Quando si ospita un controllo utente in una visualizzazione di MFC, [CWinFormsView](../../mfc/reference/cwinformsview-class.md) invia comandi e aggiornamento comando messaggi dell'interfaccia utente per il controllo utente per consentire la gestione dei comandi MFC (ad esempio, le voci di menu frame e i pulsanti della barra degli strumenti). Implementando `ICommandTarget`, assegnare il controllo utente un riferimento al [ICommandSource](../../mfc/reference/icommandsource-interface.md) oggetto.  
  
 Vedere [procedura: aggiungere comandi (Routing) per il controllo Windows Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md) per un esempio di come utilizzare `ICommandTarget`.  
  
 Per ulteriori informazioni sull'utilizzo di Windows Form, vedere [utilizzando un controllo utente Windows Form in MFC](../../dotnet/using-a-windows-form-user-control-in-mfc.md).  
  
## <a name="requirements"></a>Requisiti  
 **Intestazione:** afxwinforms. h (definito nell'assembly atlmfc\lib\mfcmifc80.dll)  
  
##  <a name="initialize"></a>ICommandTarget:: Initialize  
 Inizializza l'oggetto di destinazione del comando.  
  
```  
void Initialize(ICommandSource^ cmdSource);  
```  
  
### <a name="parameters"></a>Parametri  
 `cmdSource`  
 Un handle all'oggetto di origine del comando.  
  
### <a name="remarks"></a>Note  
 Quando si ospita un controllo utente in una visualizzazione di MFC, CWinFormsView invia comandi e i messaggi dell'interfaccia utente di comando di aggiornamento per il controllo utente per consentire la gestione dei comandi MFC.  
  
 Questo metodo inizializza l'oggetto di destinazione di comando e associa il cmdSource oggetto di origine comando specificato. Deve essere chiamato nell'implementazione della classe del controllo utente. In fase di inizializzazione, è consigliabile registrare gestori di comandi con l'oggetto di origine del comando da ICommandSource::AddCommandHandler chiamante nell'implementazione di inizializzazione. Vedere Procedura: aggiungere comandi (Routing) per il controllo Windows Form per un esempio di come utilizzare Initialize per eseguire questa operazione.  
  
## <a name="see-also"></a>Vedere anche  
 [Procedura: aggiungere comandi Routing alle finestre di controllo Form](../../dotnet/how-to-add-command-routing-to-the-windows-forms-control.md)   
 [Interfaccia ICommandSource](../../mfc/reference/icommandsource-interface.md)



