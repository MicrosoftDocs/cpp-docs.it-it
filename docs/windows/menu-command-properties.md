---
title: Proprietà dei comandi di menu | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-windows
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- menu items, properties
ms.assetid: 6d308205-3c9e-42f2-ab42-45e656940e45
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- uwp
ms.openlocfilehash: 343c1ce255a26753c2b125d2a0a53e04808a0233
ms.sourcegitcommit: d55ac596ba8f908f5d91d228dc070dad31cb8360
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/08/2018
ms.locfileid: "33878863"
---
# <a name="menu-command-properties"></a>Proprietà dei comandi di menu
Le informazioni qui di seguito sono organizzate in base alle proprietà dei menu visualizzate nella [finestra Proprietà](/visualstudio/ide/reference/properties-window) quando si seleziona un comando di menu. Le proprietà vengono elencate in ordine alfabetico, ma nella finestra Proprietà è possibile visualizzarle anche per categoria.  
  
|Proprietà|Descrizione|  
|--------------|-----------------|  
|**Break**|Può essere uno dei seguenti valori:<br /><br /> -   **Nessuno** (predefinito): nessuna interruzione.<br />-   **Column**: per menu statici, questo valore posiziona il comando di menu su una nuova riga. Nei menu a comparsa questo valore consente di posizionare il comando di menu in una nuova colonna, senza linee di separazione tra le colonne. L'impostazione di questa proprietà influisce sull'aspetto del menu solo in fase di esecuzione e non nell'Editor dei menu.<br />-   **Bar**: è uguale a Column, ad eccezione del fatto che nei menu a comparsa la nuova colonna viene separata dalla precedente mediante una linea verticale. L'impostazione di questa proprietà influisce sull'aspetto del menu solo in fase di esecuzione e non nell'Editor dei menu.|  
|**Caption**|Il testo che costituisce l'etichetta del comando di menu ovvero il nome del menu. Per impostare come tasto di scelta una lettera della didascalia di un comando di menu, anteporre alla lettera desiderata una e commerciale (&).|  
|**Checked**|Se il valore impostato è True, il comando di menu inizialmente è selezionato. Tipo: Bool. Impostazione predefinita: False.|  
|**Enabled**|Se il valore impostato è **False**, la voce di menu è disabilitata.|  
|**Grayed**|Se il valore impostato è True, il comando di menu inizialmente appare in grigio ed è inattivo. Tipo: Bool. Impostazione predefinita: False.|  
|**?**|Allinea a destra la voce di menu. In tutte le applicazioni Windows, ad esempio, il comando di menu **?** è sempre posizionato a destra. Impostando questa proprietà su una voce di menu, tale voce verrà visualizzata all'estremità destra del menu. Si applica alle voci di primo livello. Impostazione predefinita: **False**.|  
|**ID**|Un simbolo definito nel file di intestazione. Tipo: simbolo, numero intero o stringa tra virgolette. È possibile usare qualsiasi simbolo normalmente disponibile negli editor. La [finestra Proprietà](/visualstudio/ide/reference/properties-window) non fornisce un elenco a discesa da cui effettuare una selezione.|  
|**Popup**|Se il valore impostato è True, il comando di menu corrisponde a un menu a comparsa. Tipo: Bool. Impostazione predefinita: True per i menu di primo livello su una barra dei menu, False in caso contrario.|  
|**Prompt**|Contiene il testo da visualizzare nella barra di stato quando il comando di menu viene evidenziato. Il testo viene inserito nella tabella di stringhe con lo stesso identificatore usato per il comando di menu. Questa proprietà è disponibile per qualsiasi tipo di progetto, ma la funzionalità in fase di esecuzione è specifica dei progetti MFC.|  
|**Right to Left Justify**|Allinea a destra il comando di menu sulla barra dei menu in fase di esecuzione. Tipo: Bool. Impostazione predefinita: False.|  
|**Right to Left Order**|Consente la visualizzazione dei comandi di menu da destra a sinistra nei casi in cui l'interfaccia è localizzata in una lingua che prevede la lettura da destra a sinistra, quale l'ebraico o l'arabo.|  
|**Separator**|Se il valore impostato è True, il comando di menu è un separatore. Tipo: Bool. Impostazione predefinita: False.|  
  

  
## <a name="requirements"></a>Requisiti  
 Win32  
  
## <a name="see-also"></a>Vedere anche  
 [Editor dei menu](../windows/menu-editor.md)