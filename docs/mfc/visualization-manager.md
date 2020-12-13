---
description: 'Altre informazioni su: Gestione visualizzazioni'
title: Gestione visualizzazione
ms.date: 11/19/2018
helpviewer_keywords:
- Visualization Manager
ms.assetid: c9dd1365-27ac-42e5-8caa-1004525b4129
ms.openlocfilehash: b99331503e4e7e69cc5d8a19fde7641c1b1daeeb
ms.sourcegitcommit: d6af41e42699628c3e2e6063ec7b03931a49a098
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 12/11/2020
ms.locfileid: "97143208"
---
# <a name="visualization-manager"></a>Gestione visualizzazione

Il gestore di visualizzazione è un oggetto che controlla l'aspetto di un'intera applicazione. Funge da singola classe in cui è possibile inserire tutto il codice di disegno per l'applicazione. La libreria MFC include diversi gestori visivi. Se si vuole creare una visualizzazione personalizzata per l'applicazione, è anche possibile creare un proprio gestore di oggetti visivi. Nelle immagini seguenti viene illustrata la stessa applicazione quando sono abilitati diversi gestori oggetti visivi:

![Rendering di MyApp mediante CMFCVisualManagerWindows](../mfc/media/vmwindows.png "Rendering di MyApp mediante CMFCVisualManagerWindows") <br/>
MyApp che usa CMFCVisualManagerWindows Visual Manager

![Rendering di MyApp mediante CMFCVisualManagerVS2005](../mfc/media/vmvs2005.png "Rendering di MyApp mediante CMFCVisualManagerVS2005") <br/>
MyApp che usa CMFCVisualManagerVS2005 Visual Manager

![Rendering di MyApp mediante CMFCVisualManagerOfficeXP](../mfc/media/vmofficexp.png "Rendering di MyApp mediante CMFCVisualManagerOfficeXP") <br/>
MyApp che usa CMFCVisualManagerOfficeXP Visual Manager

![Rendering di MyApp mediante CMFCVisualManagerOffice2003](../mfc/media/vmoffice2003.png "Rendering di MyApp mediante CMFCVisualManagerOffice2003") <br/>
MyApp che usa CMFCVisualManagerOffice2003 Visual Manager

![Rendering di MyApp mediante CMFCVisualManagerOffice2007](../mfc/media/msoffice2007.png "Rendering di MyApp mediante CMFCVisualManagerOffice2007") <br/>
MyApp che usa CMFCVisualManagerOffice2007 Visual Manager

Per impostazione predefinita, la gestione visiva gestisce il codice di disegno per diversi elementi dell'interfaccia utente grafica. Per fornire elementi dell'interfaccia utente personalizzati, è necessario eseguire l'override dei metodi di disegno correlati del gestore di oggetti visivi. Per l'elenco di questi metodi, vedere [classe CMFCVisualManager](../mfc/reference/cmfcvisualmanager-class.md). I metodi di cui è possibile eseguire l'override per fornire un aspetto personalizzato sono tutti i metodi che iniziano con `OnDraw` .

L'applicazione può avere un solo `CMFCVisualManager` oggetto. Per ottenere un puntatore al gestore di visualizzazione per l'applicazione, chiamare la funzione statica [CMFCVisualManager:: GetInstance](../mfc/reference/cmfcvisualmanager-class.md#getinstance). Poiché tutti i gestori visivi ereditano da `CMFCVisualManager` , il `CMFCVisualManager::GetInstance` metodo otterrà un puntatore al gestore di visualizzazione appropriato, anche se si crea un gestore di oggetti visivi personalizzato.

Se si desidera creare un gestore di oggetti visivi personalizzato, è necessario derivarlo da un gestore di visualizzazione già esistente. La classe predefinita da cui derivare è `CMFCVisualManager` . Tuttavia, è possibile utilizzare un diverso gestore visiva se è più simile a quello che si desidera per l'applicazione. Se, ad esempio, si desidera utilizzare il `CMFCVisualManagerOffice2007` gestore di visualizzazione, ma si desidera solo modificare il modo in cui i separatori sembrano, è possibile derivare la classe personalizzata da `CMFCVisualManagerOffice2007` . In questo scenario, è necessario sovrascrivere solo i metodi per la creazione di separatori.

Esistono due modi possibili per usare un gestore di visualizzazione specifico per l'applicazione. Un modo consiste nel chiamare il metodo [CMFCVisualManager:: SetDefaultManager](../mfc/reference/cmfcvisualmanager-class.md#setdefaultmanager) e passare il gestore visuale appropriato come parametro. Nell'esempio di codice seguente viene illustrato come utilizzare il `CMFCVisualManagerVS2005` gestore di visualizzazione con questo metodo:

```cpp
CMFCVisualManager::SetDefaultManager (RUNTIME_CLASS (CMFCVisualManagerVS2005));
```

L'altro modo per usare un gestore di visualizzazione nell'applicazione consiste nel crearlo manualmente. L'applicazione utilizzerà quindi questo nuovo gestore visuale per tutto il rendering. Tuttavia, poiché può esistere un solo `CMFCVisualManager` oggetto per ogni applicazione, sarà necessario eliminare il gestore visuale corrente prima di crearne uno nuovo. Nell'esempio seguente `CMyVisualManager` è un gestore di oggetti visivi personalizzato derivato da `CMFCVisualManager` . Il metodo seguente consente di modificare il valore usato da Visual Manager per visualizzare l'applicazione, a seconda di un indice:

```cpp
void CMyApp::SetSkin (int index)
{
    if (CMFCVisualManager::GetInstance() != NULL)
    {
        delete CMFCVisualManager::GetInstance();
    }

    switch (index)
    {
    case DEFAULT_STYLE:
        // The following statement creates a new CMFCVisualManager
        CMFCVisualManager::GetInstance();
        break;

    case CUSTOM_STYLE:
        new CMyVisualManager;
        break;

    default:
        CMFCVisualManager::GetInstance();
        break;
    }

    CMFCVisualManager::GetInstance()->RedrawAll();
}
```

## <a name="see-also"></a>Vedi anche

[Elementi dell'interfaccia utente](../mfc/user-interface-elements-mfc.md)<br/>
[Classe CMFCVisualManager](../mfc/reference/cmfcvisualmanager-class.md)
