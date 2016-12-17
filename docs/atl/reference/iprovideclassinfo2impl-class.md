---
title: "IProvideClassInfo2Impl Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/05/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "IProvideClassInfo2"
  - "ATL.IProvideClassInfo2Impl"
  - "IProvideClassInfo2Impl"
  - "ATL::IProvideClassInfo2Impl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "class information, ATL"
  - "IProvideClassInfo2 ATL implementation"
  - "IProvideClassInfo2Impl class"
ms.assetid: d74956e8-9c69-4cba-b99d-ca1ac031bb9d
caps.latest.revision: 20
caps.handback.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IProvideClassInfo2Impl Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe fornisce un'implementazione predefinita dei metodi [IProvideClassInfo2](http://msdn.microsoft.com/library/windows/desktop/ms693764) e [IProvideClassInfo](http://msdn.microsoft.com/library/windows/desktop/ms687303).  
  
## Sintassi  
  
```  
  
      template <  
   const CLSID* pcoclsid,  
   const IID* psrcid,  
   const GUID* plibid = &CAtlModule::m_libid,  
   WORD wMajor = 1,  
   WORD wMinor = 0,  
   class tihclass = CComTypeInfoHolder   
>  
class ATL_NO_VTABLE IProvideClassInfo2Impl :  
   public IProvideClassInfo2  
```  
  
#### Parametri  
 *pcoclsid*  
 Un puntatore all'identificatore le coclassi.  
  
 *psrcid*  
 Un puntatore all'identificatore per l'interfaccia dispatch in uscita predefinita le coclassi.  
  
 `plibid`  
 Un puntatore al LIBID della libreria dei tipi contenente le informazioni sull'interfaccia.  Per impostazione predefinita, la libreria dei tipi a livello di server viene passata.  
  
 `wMajor`  
 La versione principale della libreria dei tipi.  Il valore predefinito è 1.  
  
 `wMinor`  
 La versione secondaria della libreria dei tipi.  Il valore predefinito è 0.  
  
 `tihclass`  
 La classe utilizzata per gestire le informazioni sul tipo le coclassi.  Il valore predefinito è `CComTypeInfoHolder`.  
  
## Membri  
  
### Costruttori  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IProvideClassInfo2Impl::IProvideClassInfo2Impl](../Topic/IProvideClassInfo2Impl::IProvideClassInfo2Impl.md)|Costruttore.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IProvideClassInfo2Impl::GetClassInfo](../Topic/IProvideClassInfo2Impl::GetClassInfo.md)|Recupera un puntatore **ITypeInfo** alle informazioni sul tipo le coclassi.|  
|[IProvideClassInfo2Impl::GetGUID](../Topic/IProvideClassInfo2Impl::GetGUID.md)|Recupera il GUID dell'interfaccia dispatch in uscita dell'oggetto.|  
  
### Membri di dati protetti  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[IProvideClassInfo2Impl::\_tih](../Topic/IProvideClassInfo2Impl::_tih.md)|Gestisce le informazioni sulla coclasse.|  
  
## Note  
 l'interfaccia [IProvideClassInfo2](http://msdn.microsoft.com/library/windows/desktop/ms693764) estende [IProvideClassInfo](http://msdn.microsoft.com/library/windows/desktop/ms687303) aggiungendo il metodo `GetGUID`.  Questo metodo consente a un client recuperare un'interfaccia in uscita IID di un oggetto per il set predefinito di evento.  La classe `IProvideClassInfo2Impl` fornisce un'implementazione predefinita dei metodi `IProvideClassInfo2` e **IProvideClassInfo**.  
  
 `IProvideClassInfo2Impl` contiene un membro statico di tipo `CComTypeInfoHolder` che gestisce le informazioni sulla coclasse.  
  
## Gerarchia di ereditarietà  
 `IProvideClassInfo2`  
  
 `IProvideClassInfo2Impl`  
  
## Requisiti  
 **Header:** atlcom.h  
  
## Vedere anche  
 [Class Overview](../../atl/atl-class-overview.md)