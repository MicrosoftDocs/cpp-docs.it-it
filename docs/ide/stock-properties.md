---
title: Proprietà predefinite | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-ide
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- stock properties, about stock properties
- stock properties
ms.assetid: a89fc454-0b8e-447a-9033-4c8af46a24d9
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
ms.openlocfilehash: 201e6f0591d446dc0e6b036cfd7ac6f3028eb812
ms.sourcegitcommit: 799f9b976623a375203ad8b2ad5147bd6a2212f0
ms.translationtype: HT
ms.contentlocale: it-IT
ms.lasthandoff: 09/19/2018
ms.locfileid: "46430267"
---
# <a name="stock-properties"></a>Proprietà predefinite

Se si aggiunge una proprietà a un'interfaccia dispatch di MFC usando l'[Aggiunta guidata proprietà](../ide/idl-attributes-add-property-wizard.md), è possibile scegliere una proprietà predefinita dall'elenco **Nome della proprietà** della pagina [Nomi](../ide/names-add-property-wizard.md) della procedura guidata. Di seguito sono riportate le proprietà:

|Nome della proprietà|Descrizione|
|-------------------|-----------------|
|**Appearance**|Restituisce o imposta un valore che determina l'aspetto del controllo. La proprietà **Appearance** del controllo può includere o omettere effetti di visualizzazione tridimensionale. Questa è una proprietà di lettura/scrittura ambientale.|
|`BackColor`|Restituisce o imposta la proprietà ambientale `BackColor` del controllo su un colore della tavolozza (RGB) o un colore di sistema predefinito. Per impostazione predefinita, il relativo valore corrisponde al colore di sfondo del contenitore del controllo. Questa è una proprietà di lettura/scrittura ambientale.|
|`BorderStyle`|Restituisce o imposta lo stile del bordo per un controllo. Si tratta di una proprietà di lettura/scrittura.|
|**Caption**|Restituisce o imposta la proprietà **Caption** del controllo. La didascalia è il titolo della finestra. **Caption** non ha alcun tipo di implementazione **Variabile membro**.|
|**Enabled**|Restituisce o imposta la proprietà **Enabled** del controllo. Un controllo abilitato può rispondere agli eventi generati dall'utente.|
|**Tipo di carattere**|Restituisce o imposta il tipo di carattere dell'ambiente del controllo. Null se il controllo non ha alcun tipo di carattere.|
|`ForeColor`|Restituisce o imposta la proprietà ambientale `ForeColor` del controllo.|
|**hWnd**|Restituisce o imposta la proprietà **hWnd** del controllo. **hWnd** non ha alcun tipo di implementazione **Variabile membro**.|
|**ReadyState**|Restituisce o imposta la proprietà **ReadyState** del controllo. Un controllo può essere non inizializzato, inizializzato, in caricamento, interattivo o completo. Per altre informazioni, vedere [READYSTATE](https://msdn.microsoft.com/library/aa768362.aspx) in *Internet SDK*.|
|**per**|Restituisce o imposta il testo contenuto in un controllo. **Text** non ha alcun tipo di implementazione **Variabile membro**.|

## <a name="see-also"></a>Vedere anche

[Aggiunta di una proprietà](../ide/adding-a-property-visual-cpp.md)<br>
[Attributi IDL, Aggiunta guidata proprietà](../ide/idl-attributes-add-property-wizard.md)