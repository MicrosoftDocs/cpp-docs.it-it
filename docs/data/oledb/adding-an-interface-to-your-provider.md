---
title: Aggiunta di un'interfaccia al provider
ms.date: 10/29/2018
helpviewer_keywords:
- OLE DB provider templates, object interfaces
ms.assetid: b0fc7cf8-428a-4584-9d64-ce9074d0eb66
ms.openlocfilehash: c0452ca74509b65de3787af93bff41b3cb399c99
ms.sourcegitcommit: c7f90df497e6261764893f9cc04b5d1f1bf0b64b
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 04/05/2019
ms.locfileid: "59033872"
---
# <a name="adding-an-interface-to-your-provider"></a>Aggiunta di un'interfaccia al provider

Determinare l'oggetto che si desidera aggiungere l'interfaccia per (in genere gli oggetti di origine, set di righe, comando o sessione di dati creati dal **Creazione guidata Provider OLE DB**). È possibile che l'oggetto che è necessario aggiungere l'interfaccia è quella attualmente non supporta il provider. In tal caso, eseguire la **Creazione guidata Provider OLE DB ATL** per creare l'oggetto. Fare clic sul progetto in **Visualizzazione classi**, fare clic su **Add** > **nuovo elemento** dal menu, selezionare **installato**  >  **Visual C++** > **ATL**, quindi fare clic su **Provider OLEDB ATL**. È possibile inserire il codice dell'interfaccia in una directory distinta e quindi copiare i file di progetto del provider.

Se è stata creata una nuova classe per supportare l'interfaccia, rendere l'oggetto ereditano da tale classe. Ad esempio, è possibile aggiungere la classe `IRowsetIndexImpl` a un oggetto set di righe:

```cpp
template <class Creator>
class CCustomRowset :
    public CRowsetImpl< CCustomRowset<Creator>, CCustomWindowsFile, Creator>,
    public IRowsetIndexImpl< ... >
```

Aggiungere l'interfaccia nell'oggetto tramite la macro COM_INTERFACE_ENTRY COM_MAP. Se non è presente alcun mapping, crearne uno. Ad esempio:

```cpp
BEGIN_COM_MAP(CCustomRowset)
     COM_INTERFACE_ENTRY(IRowsetIndex)
END_COM_MAP()
```

Per l'oggetto set di righe, catena la mappa dell'elemento padre dell'oggetto in modo che l'oggetto può delegare alla classe padre. In questo esempio, aggiungere la macro COM_INTERFACE_ENTRY_CHAIN alla mappa:

```cpp
BEGIN_COM_MAP(CCustomRowset)
     COM_INTERFACE_ENTRY(IRowsetIndex)
     COM_INTERFACE_ENTRY_CHAIN(CRowsetImpl)
END_COM_MAP()
```

## <a name="see-also"></a>Vedere anche

[Utilizzo dei modelli provider OLE DB](../../data/oledb/working-with-ole-db-provider-templates.md)