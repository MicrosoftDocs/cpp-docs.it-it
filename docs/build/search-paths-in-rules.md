---
title: Percorsi di ricerca nelle regole | Documenti Microsoft
ms.custom: ''
ms.date: 11/04/2016
ms.technology:
- cpp-tools
ms.topic: conceptual
dev_langs:
- C++
helpviewer_keywords:
- search paths in NMAKE inference rules
- inference rules in NMAKE
- rules, inference
ms.assetid: 38feded6-536d-425d-bf40-fff3173a5506
author: corob-msft
ms.author: corob
ms.workload:
- cplusplus
ms.openlocfilehash: 25127377f20de3cb7c7b55e275692eefbf077067
ms.sourcegitcommit: be2a7679c2bd80968204dee03d13ca961eaa31ff
ms.translationtype: MT
ms.contentlocale: it-IT
ms.lasthandoff: 05/03/2018
ms.locfileid: "32380401"
---
# <a name="search-paths-in-rules"></a>Percorsi di ricerca nelle regole
```  
{frompath}.fromext{topath}.toext:  
   commands  
```  
  
## <a name="remarks"></a>Note  
 Una regola di inferenza si applica a una dipendenza solo se i percorsi specificati nella dipendenza esattamente corrispondono i percorsi di regole di inferenza. Specificare la directory del dipendente in *frompath* e della destinazione in *topath*; non sono consentiti spazi. Specificare solo un percorso per ciascuna estensione. Un percorso per un'estensione richiede un percorso in altro. Per specificare la directory corrente, utilizzare un punto (.) o parentesi graffe vuote ({}). Le macro possono rappresentare *frompath* e *topath*; richiamati durante la pre-elaborazione.  
  
## <a name="example"></a>Esempio  
  
### <a name="code"></a>Codice  
  
```  
{dbi\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $(YUDBI) $<  
  
{ilstore\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $<  
  
{misc\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $(YUPDB) $<  
  
{misc\}.c{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $<  
  
{msf\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $<  
  
{bsc\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $(YUPDB) $<  
  
{mre\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $(YUPDB) $<  
  
{namesrvr\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $(YUPDB) $<  
  
{src\cvr\}.cpp{$(ODIR)}.obj::  
        $(CC) $(CFLAGS) $<  
```  
  
## <a name="see-also"></a>Vedere anche  
 [Definizione di una regola](../build/defining-a-rule.md)