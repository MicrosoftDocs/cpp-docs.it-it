---
title: CArchiveException Class | Microsoft Docs
ms.custom: 
ms.date: 11/04/2016
ms.reviewer: 
ms.suite: 
ms.technology:
- cpp-windows
ms.tgt_pltfrm: 
ms.topic: reference
f1_keywords:
- CArchiveException
- AFX/CArchiveException
- AFX/CArchiveException::CArchiveException
- AFX/CArchiveException::m_cause
- AFX/CArchiveException::m_strFileName
dev_langs:
- C++
helpviewer_keywords:
- CArchiveException [MFC], CArchiveException
- CArchiveException [MFC], m_cause
- CArchiveException [MFC], m_strFileName
ms.assetid: da31a127-e86c-41d1-b0b6-bed0865b1b49
caps.latest.revision: 21
author: mikeblome
ms.author: mblome
manager: ghogen
translation.priority.ht:
- cs-cz
- de-de
- es-es
- fr-fr
- it-it
- ja-jp
- ko-kr
- pl-pl
- pt-br
- ru-ru
- tr-tr
- zh-cn
- zh-tw
ms.translationtype: MT
ms.sourcegitcommit: 4e0027c345e4d414e28e8232f9e9ced2b73f0add
ms.openlocfilehash: 1c1652037db836819e471ef18c448e4c22ea5e40
ms.contentlocale: it-it
ms.lasthandoff: 09/12/2017

---
# <a name="carchiveexception-class"></a>CArchiveException Class
Represents a serialization exception condition  
  
## <a name="syntax"></a>Syntax  
  
```  
class CArchiveException : public CException  
```  
  
## <a name="members"></a>Members  
  
### <a name="public-constructors"></a>Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CArchiveException::CArchiveException](#carchiveexception)|Constructs a `CArchiveException` object.|  
  
### <a name="public-data-members"></a>Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CArchiveException::m_cause](#m_cause)|Indicates the exception cause.|  
|[CArchiveException::m_strFileName](#m_strfilename)|Specifies the name of the file for this exception condition.|  
  
## <a name="remarks"></a>Remarks  
 The `CArchiveException` class includes a public data member that indicates the cause of the exception.  
  
 `CArchiveException` objects are constructed and thrown inside [CArchive](../../mfc/reference/carchive-class.md) member functions. You can access these objects within the scope of a **CATCH** expression. The cause code is independent of the operating system. For more information about exception processing, see [Exception Handling (MFC)](../../mfc/exception-handling-in-mfc.md).  
  
## <a name="inheritance-hierarchy"></a>Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 [CException](../../mfc/reference/cexception-class.md)  
  
 `CArchiveException`  
  
## <a name="requirements"></a>Requirements  
 **Header:** afx.h  
  
##  <a name="carchiveexception"></a>  CArchiveException::CArchiveException  
 Constructs a `CArchiveException` object, storing the value of `cause` in the object.  
  
```  
CArchiveException(
    int cause = CArchiveException::none,  
    LPCTSTR lpszArchiveName = NULL);
```  
  
### <a name="parameters"></a>Parameters  
 `cause`  
 An enumerated type variable that indicates the reason for the exception. For a list of the enumerators, see the [m_cause](#m_cause) data member.  
  
 `lpszArchiveName`  
 Points to a string containing the name of the `CArchive` object causing the exception.  
  
### <a name="remarks"></a>Remarks  
 You can create a `CArchiveException` object on the heap and throw it yourself or let the global function [AfxThrowArchiveException](../../mfc/reference/exception-processing.md#afxthrowarchiveexception) handle it for you.  
  
 Do not use this constructor directly; instead, call the global function `AfxThrowArchiveException`.  
  
##  <a name="m_cause"></a>  CArchiveException::m_cause  
 Specifies the cause of the exception.  
  
```  
int m_cause;  
```  
  
### <a name="remarks"></a>Remarks  
 This data member is a public variable of type `int`. Its values are defined by a `CArchiveException` enumerated type. The enumerators and their meanings are as follows:  
  
- **CArchiveException::none** No error occurred.  
  
- **CArchiveException::genericException** Unspecified error.  
  
- **CArchiveException::readOnly** Tried to write into an archive opened for loading.  
  
- **CArchiveException::endOfFile** Reached end of file while reading an object.  
  
- **CArchiveException::writeOnly** Tried to read from an archive opened for storing.  
  
- **CArchiveException::badIndex** Invalid file format.  
  
- **CArchiveException::badClass** Tried to read an object into an object of the wrong type.  
  
- **CArchiveException::badSchema** Tried to read an object with a different version of the class.  
  
    > [!NOTE]
    >  These `CArchiveException` cause enumerators are distinct from the `CFileException` cause enumerators.  
  
    > [!NOTE]
    > **CArchiveException::generic** is deprecated. Use **genericException** instead. If **generic** is used in an application and built with /clr, there will be syntax errors that are not easy to decipher.  
  
##  <a name="m_strfilename"></a>  CArchiveException::m_strFileName  
 Specifies the name of the file for this exception condition.  
  
```  
CString m_strFileName;  
```  
  
## <a name="see-also"></a>See Also  
 [CException Class](../../mfc/reference/cexception-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CArchive Class](../../mfc/reference/carchive-class.md)   
 [AfxThrowArchiveException](../../mfc/reference/exception-processing.md#afxthrowarchiveexception)   
 [Exception Processing](../../mfc/reference/exception-processing.md)


