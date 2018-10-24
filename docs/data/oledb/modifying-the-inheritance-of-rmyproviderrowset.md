---
title: Modifica dell'ereditarietà di RCustomRowset | Microsoft Docs
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-data
ms.topic: reference
dev_langs:
- C++
helpviewer_keywords:
- RMyProviderRowset
- inheritance [C++]
- RCustomRowset
ms.assetid: 33089c90-98a4-43e7-8e67-d4bb137e267e
author: mikeblome
ms.author: mblome
ms.workload:
- cplusplus
- data-storage
ms.openlocfilehash: a6f4827ecf0571878bc0eeaef5dce74326488c61
ms.sourcegitcommit: c045c3a7e9f2c7e3e0de5b7f9513e41d8b6d19b2
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 10/24/2018
ms.locfileid: "49990283"
---
# <a name="modifying-the-inheritance-of-rcustomrowset"></a>Modifica dell'ereditarietà di RCustomRowset

Per aggiungere il `IRowsetLocate` l'interfaccia per l'esempio di un provider semplice in sola lettura, modifica dell'ereditarietà di `RCustomRowset`. Inizialmente `RCustomRowset` eredita da `CRowsetImpl`. È necessario modificare in modo che erediti da `CRowsetBaseImpl`.  
  
A questo scopo, creare una nuova classe `CMyRowsetImpl`, in *Custom*RS:  
  
```cpp
////////////////////////////////////////////////////////////////////////  
// CustomRS.h  
  
template <class T, class Storage, class CreatorClass, class ArrayType = CAtlArray<Storage>>  
class CMyRowsetImpl:  
   public CRowsetImpl<T, Storage, CreatorClass, ArrayType, CSimpleRow, IRowsetLocateImpl< T, IRowsetLocate >>  
{  
...  
};  
```  
  
A questo punto, modifica mappa dell'interfaccia COM *Custom*RS essere come segue:  
  
```cpp  
BEGIN_COM_MAP(CMyRowsetImpl)  
   COM_INTERFACE_ENTRY(IRowsetLocate)  
   COM_INTERFACE_ENTRY_CHAIN(_RowsetBaseClass)  
END_COM_MAP()  
```  
  
Verrà creata una mappa dell'interfaccia COM che comunica `CMyRowsetImpl` chiamare `QueryInterface` sia per il `IRowset` e `IRowsetLocate` interfacce. Per ottenere tutti l'implementazione per l'altro set di righe classi, i collegamenti della mappa la `CMyRowsetImpl` classe verso il `CRowsetBaseImpl` classe definiti tramite i modelli OLE DB; la mappa usa la macro COM_INTERFACE_ENTRY_CHAIN, richiedendo di modelli OLE DB per analizzare la mappa COM in `CRowsetBaseImpl` in risposta a un `QueryInterface` chiamare.  
  
Infine, collegare `RAgentRowset` al `CMyRowsetBaseImpl` modificando `RAgentRowset` da cui ereditare `CMyRowsetImpl`, come indicato di seguito:  
  
```cpp  
class RAgentRowset : public CMyRowsetImpl<RAgentRowset, CAgentMan, CCustomCommand>  
```  
  
`RAgentRowset` a questo punto è possibile usare il `IRowsetLocate` interfaccia sfruttando il resto dell'implementazione per la classe di set di righe.  
  
Quando questa operazione, è possibile [determinare in modo dinamico le colonne restituite al consumer](../../data/oledb/dynamically-determining-columns-returned-to-the-consumer.md).  
  
## <a name="see-also"></a>Vedere anche  

[Miglioramento di un provider semplice in sola lettura](../../data/oledb/enhancing-the-simple-read-only-provider.md)