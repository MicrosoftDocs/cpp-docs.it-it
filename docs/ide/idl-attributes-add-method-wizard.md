---
title: Attributi IDL, Aggiunta guidata metodo
ms.date: 11/04/2016
f1_keywords:
- vc.codewiz.method.idlattrib
helpviewer_keywords:
- Add Method Wizard [C++]
- IDL attributes, Add Method Wizard
ms.assetid: f80c3bc1-b515-4d6c-83ee-98c2c21ba902
ms.openlocfilehash: 073f821d7db0733c89c21ed4b2a85014aa151244
ms.sourcegitcommit: 6052185696adca270bc9bdbec45a626dd89cdcdd
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 10/31/2018
ms.locfileid: "50615787"
---
# <a name="idl-attributes-add-method-wizard"></a>Attributi IDL, Aggiunta guidata metodo

Usare questa pagina dell'Aggiunta guidata metodo per specificare le impostazioni del linguaggio di definizione dell'interfaccia (IDL) per il metodo.

- **ID**

   Imposta l'ID numerico che identifica il metodo. Vedere [id](/windows/desktop/Midl/id) in *MIDL Reference* (Riferimento MIDL).

   Questa casella non è disponibile per le interfacce personalizzate e per le interfacce dispatch MFC.

- **call_as**

   Specifica il nome di un metodo remoto a cui è possibile associare il metodo locale. Vedere [call_as](/windows/desktop/Midl/call-as) in *MIDL Reference* (Riferimento MIDL).

   Non disponibile per le interfacce dispatch MFC.

- **helpcontext**

   Specifica un ID contesto che consente all'utente di visualizzare informazioni sul metodo nel file della Guida. Vedere [helpcontext](/windows/desktop/Midl/helpcontext) in *MIDL Reference* (Riferimento MIDL).

   Non disponibile per le interfacce dispatch MFC.

- **helpstring**

   Specifica una stringa di caratteri usata per descrivere l'elemento a cui viene applicata. L'impostazione predefinita è "method *Method name*". Vedere [helpstring](/windows/desktop/Midl/helpstring) in *MIDL Reference* (Riferimento MIDL).

   Non disponibile per le interfacce dispatch MFC.

- **Attributi aggiuntivi**

   Non disponibile per le interfacce dispatch MFC.

   |Attributo|Descrizione|
   |---------------|-----------------|
   |**hidden**|Indica che il metodo esiste ma non deve essere visualizzato in un visualizzatore per utenti. Vedere [hidden](/windows/desktop/Midl/hidden) in *MIDL Reference* (Riferimento MIDL).|
   |**source**|Indica che un membro del metodo è un'origine di eventi. Vedere [source](/windows/desktop/Midl/source) in *MIDL Reference* (Riferimento MIDL).|
   |`local`|Specifica al compilatore MIDL che il metodo non è remoto. Vedere [local](/windows/desktop/Midl/local) in *MIDL Reference* (Riferimento MIDL).|
   |**restricted**|Specifica che il metodo non può essere chiamato in modo arbitrario. Vedere [restricted](/windows/desktop/Midl/restricted) in *MIDL Reference* (Riferimento MIDL).|
   |**vararg**|Specifica che il metodo accetta un numero variabile di argomenti. Per ottenere questo risultato, l'ultimo argomento deve essere una matrice protetta di tipo **VARIANT** che contiene tutti gli argomenti rimanenti. Vedere [vararg](/windows/desktop/Midl/vararg) in *MIDL Reference* (Riferimento MIDL).|

## <a name="see-also"></a>Vedere anche

[Aggiunta di un metodo](../ide/adding-a-method-visual-cpp.md)<br>
[Aggiunta guidata metodo](../ide/add-method-wizard.md)