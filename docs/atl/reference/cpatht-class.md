---
title: "CPathT Class | Microsoft Docs"
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
  - "ATL.CPathT"
  - "CPathT"
  - "ATL::CPathT<StringType>"
  - "ATL::CPathT"
  - "ATL.CPathT<StringType>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CPathT class"
ms.assetid: eba4137d-1fd2-4b44-a2e1-0944db64df3c
caps.latest.revision: 20
caps.handback.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CPathT Class
[!INCLUDE[vs2017banner](../../assembler/inline/includes/vs2017banner.md)]

Questa classe rappresenta un percorso.  
  
> [!IMPORTANT]
>  Questa classe e i relativi membri non possono essere utilizzati nelle applicazioni eseguite in Windows Runtime.  
  
## Sintassi  
  
```  
  
      template< typename   
      StringType  
      >   
class CPathT  
```  
  
#### Parametri  
 `StringType`  
 La classe string ATL\/MFC da utilizzare per il percorso [CStringT](../../atl-mfc-shared/reference/cstringt-class.md)\(vedere\).  
  
## Membri  
  
### Typedef pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPathT::PCXSTR](../Topic/CPathT::PCXSTR.md)|Un tipo costante di stringa.|  
|[CPathT::PXSTR](../Topic/CPathT::PXSTR.md)|Un tipo stringa.|  
|[CPathT::XCHAR](../Topic/CPathT::XCHAR.md)|Un tipo carattere.|  
  
### Costruttori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPathT::CPathT](../Topic/CPathT::CPathT.md)|Il costruttore per il percorso.|  
  
### Metodi pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPathT::AddBackslash](../Topic/CPathT::AddBackslash.md)|Chiamare questo metodo per aggiungere una barra rovesciata alla fine di una stringa per creare la sintassi corretta per un percorso.|  
|[CPathT::AddExtension](../Topic/CPathT::AddExtension.md)|Chiamare questo metodo per aggiungere un'estensione di file in un percorso.|  
|[CPathT::Append](../Topic/CPathT::Append.md)|Chiamare questo metodo per aggiungere una stringa al percorso corrente.|  
|[CPathT::BuildRoot](../Topic/CPathT::BuildRoot.md)|Chiamare questo metodo per creare un percorso radice da un numero di unità specificato.|  
|[CPathT::Canonicalize](../Topic/CPathT::Canonicalize.md)|Chiamare questo metodo per convertire il percorso di formato canonico.|  
|[CPathT::Combine](../Topic/CPathT::Combine.md)|Chiamare questo metodo per concatenare una stringa che rappresentano un nome di directory e una stringa che rappresenta il nome del percorso del file in un percorso.|  
|[CPathT::CommonPrefix](../Topic/CPathT::CommonPrefix.md)|Chiamare questo metodo per determinare se il percorso specificato condivide un prefisso comune con il percorso corrente.|  
|[CPathT::CompactPath](../Topic/CPathT::CompactPath.md)|Chiamare questo metodo per troncare un percorso di file per immettere una larghezza in pixel specificata sostituendo i componenti di percorso con i puntini di sospensione.|  
|[CPathT::CompactPathEx](../Topic/CPathT::CompactPathEx.md)|Chiamare questo metodo per troncare un percorso di file per immettere un numero di caratteri specificato sostituendo i componenti di percorso con i puntini di sospensione.|  
|[CPathT::FileExists](../Topic/CPathT::FileExists.md)|Chiamare questo metodo per controllare se il file al nome del percorso esistente.|  
|[CPathT::FindExtension](../Topic/CPathT::FindExtension.md)|Chiamare questo metodo per trovare il percorso dell'estensione di file nel percorso.|  
|[CPathT::FindFileName](../Topic/CPathT::FindFileName.md)|Chiamare questo metodo per trovare la posizione del nome file nel percorso.|  
|[CPathT::GetDriveNumber](../Topic/CPathT::GetDriveNumber.md)|Chiamare questo metodo per trovare il percorso una lettera di unità nell'intervallo "A" a "Z" e restituire il numero di unità corrispondente.|  
|[CPathT::GetExtension](../Topic/CPathT::GetExtension.md)|Chiamare questo metodo per ottenere l'estensione di file dal percorso.|  
|[CPathT::IsDirectory](../Topic/CPathT::IsDirectory.md)|Chiamare questo metodo per controllare se il percorso sia una directory valida.|  
|[CPathT::IsFileSpec](../Topic/CPathT::IsFileSpec.md)|Chiamare questo metodo per trovare un percorso tutti i caratteri di delimitazione, ad esempio ": " o "\\ "\).  Se non sono presenti caratteri di delimitazione presenti, viene considerato un percorso di spec. il file.|  
|[CPathT::IsPrefix](../Topic/CPathT::IsPrefix.md)|Chiamare questo metodo per determinare se un percorso contiene un prefisso valido del tipo passato da `pszPrefix`.|  
|[CPathT::IsRelative](../Topic/CPathT::IsRelative.md)|Chiamare questo metodo per determinare se il percorso è relativo.|  
|[CPathT::IsRoot](../Topic/CPathT::IsRoot.md)|Chiamare questo metodo per determinare se il percorso è una radice della directory.|  
|[CPathT::IsSameRoot](../Topic/CPathT::IsSameRoot.md)|Chiamare questo metodo per determinare se un altro percorso con un componente radice comune con il percorso corrente.|  
|[CPathT::IsUNC](../Topic/CPathT::IsUNC.md)|Chiamare questo metodo per determinare se il percorso è valido un percorso UNC \(convenzione di denominazione universale\) per un server e una condivisione.|  
|[CPathT::IsUNCServer](../Topic/CPathT::IsUNCServer.md)|Chiamare questo metodo per determinare se il percorso è valido un percorso UNC \(convenzione di denominazione universale\) per un solo server.|  
|[CPathT::IsUNCServerShare](../Topic/CPathT::IsUNCServerShare.md)|Chiamare questo metodo per determinare se il percorso è un percorso valido di condivisione UNC \(convenzione di denominazione universale\), \\\\*server*\\*share*.|  
|[CPathT::MakePretty](../Topic/CPathT::MakePretty.md)|Chiamare questo metodo per convertire un percorso a tutti i caratteri minuscoli per fornire il percorso un aspetto coerente.|  
|[CPathT::MatchSpec](../Topic/CPathT::MatchSpec.md)|Chiamare questo metodo per trovare il percorso una stringa contenente un tipo jolly di corrispondenza.|  
|[CPathT::QuoteSpaces](../Topic/CPathT::QuoteSpaces.md)|Chiamare questo metodo per racchiudere il percorso tra virgolette se contiene eventuali spazi.|  
|[CPathT::RelativePathTo](../Topic/CPathT::RelativePathTo.md)|Chiamare questo metodo per creare un percorso relativo da un file o una cartella a un altro.|  
|[CPathT::RemoveArgs](../Topic/CPathT::RemoveArgs.md)|Chiamare questo metodo per rimuovere tutti gli argomenti della riga di comando dal percorso.|  
|[CPathT::RemoveBackslash](../Topic/CPathT::RemoveBackslash.md)|Chiamare questo metodo per rimuovere la barra rovesciata finale del percorso.|  
|[CPathT::RemoveBlanks](../Topic/CPathT::RemoveBlanks.md)|Chiamare questo metodo per rimuovere gli spazi iniziali e finali dal percorso.|  
|[CPathT::RemoveExtension](../Topic/CPathT::RemoveExtension.md)|Chiamare questo metodo per rimuovere l'estensione di file dal percorso, se presente.|  
|[CPathT::RemoveFileSpec](../Topic/CPathT::RemoveFileSpec.md)|Chiamare questo metodo per rimuovere il nome file e la barra rovesciata finali dal percorso, se sono stati.|  
|[CPathT::RenameExtension](../Topic/CPathT::RenameExtension.md)|Chiamare questo metodo per sostituire l'estensione di file nel percorso con una nuova estensione.  Se il nome di file non contiene l'estensione, l'estensione verrà allegata alla fine della stringa.|  
|[CPathT::SkipRoot](../Topic/CPathT::SkipRoot.md)|Chiamare questo metodo per analizzare un percorso, ignorando la lettera di unità o il server di condivisione UNC o di parti del percorso.|  
|[CPathT::StripPath](../Topic/CPathT::StripPath.md)|Chiamare questo metodo per rimuovere la parte del percorso di percorso completo e il nome file.|  
|[CPathT::StripToRoot](../Topic/CPathT::StripToRoot.md)|Chiamare questo metodo per rimuovere tutte le parti del percorso eccezione delle informazioni radice.|  
|[CPathT::UnquoteSpaces](../Topic/CPathT::UnquoteSpaces.md)|Chiamare questo metodo per rimuovere le virgolette all'inizio e alla fine di un percorso.|  
  
### Operatori pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPathT::operator const StringType &](../Topic/CPathT::operator%20const%20StringType%20&.md)|Questo operatore modo l'oggetto può essere considerato come una stringa.|  
|[CPathT::operator CPathT::PCXSTR](../Topic/CPathT::operator%20CPathT::PCXSTR.md)|Questo operatore modo l'oggetto può essere considerato come una stringa.|  
|[CPathT::operator StringType &](../Topic/CPathT::operator%20StringType%20&.md)|Questo operatore modo l'oggetto può essere considerato come una stringa.|  
|[CPathT::operator \+\=](../Topic/CPathT::operator%20+=.md)|Questo operatore aggiunge una stringa al percorso.|  
  
### Membri dati pubblici  
  
|Nome|Descrizione|  
|----------|-----------------|  
|[CPathT::m\_strPath](../Topic/CPathT::m_strPath.md)|Percorso.|  
  
## Note  
 `CPath`, `CPathA`e `CPathW` sono creazioni di istanze `CPathT` definita come segue:  
  
 `typedef CPathT< CString > CPath;`  
  
 `typedef CPathT< CStringA > CPathA;`  
  
 `typedef CPathT< CStringW > CPathW;`  
  
## Requisiti  
 **Header:** atlpath.h  
  
## Vedere anche  
 [Classi](../../atl/reference/atl-classes.md)   
 [CStringT Class](../../atl-mfc-shared/reference/cstringt-class.md)